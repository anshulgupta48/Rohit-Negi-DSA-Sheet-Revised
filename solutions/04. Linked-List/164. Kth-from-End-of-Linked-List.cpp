// ******** Given the head of a linked list and an integer k, return the kth node from the end of the linked list. If k is greater than the number of nodes in the list, return -1. ********

// <======== Example ========>
// Input: k = 2, 1->2->3->4->5->6->7->8->9->NULL
// Output: 8

// Input: k = 3, 10->20->30->40->50->60->NULL
// Output: 40

// Input: k = 5, 10->5->100->5->NULL
// Output: -1


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int getKthFromLast(Node* head, int k) {
        Node* temp = head;
        int totalCount = 0;
        int count = 0;
        
        while(temp != NULL) {
            totalCount++;
            temp = temp->next;
        }
        
        temp = head;
        while(temp != NULL) {
            if(count == totalCount-k) {
                return temp->data;
            }
            
            count++;
            temp = temp->next;
        }
        
        return -1;
    }
};
