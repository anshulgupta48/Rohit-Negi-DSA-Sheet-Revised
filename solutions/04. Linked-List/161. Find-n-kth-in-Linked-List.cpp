// ******** Given the head of a singly linked list and an integer k, find the (n/k)th node in the linked list, where n is the total number of nodes.If the value of n/k is not an integer, then consider its ceiling value. ********

// <======== Example ========>
// Input: head: 1->2->3->4->5->6 , k = 2
// Output: 3

// Input: head: 2->7->9->3->5 , k = 3
// Output: 7


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int fractionalNode(Node *head, int k) {
        Node* temp = head;
        int count = 0;
        int totalCount = 0;
        
        while(temp != NULL) {
            totalCount++;
            temp = temp->next;
        }
        
        temp = head;
        int diff = (totalCount%k == 0) ? (totalCount/k) : (totalCount/k + 1);
        
        while(temp != NULL) {
            if(count == diff-1) {
                return temp->data;
            }
            
            count++;
            temp = temp->next;
        }
        
        return -1;
    }
};
