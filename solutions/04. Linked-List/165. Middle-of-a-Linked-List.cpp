// ******** You are given the head of a linked list, You have to return the value of the middle node of the linked list. If the number of nodes is odd, return the middle node value. If the number of nodes is even, there are two middle nodes, so return the second middle node value. ********

// <======== Example ========>
// Input: 1->2->3->4->5->NULL
// Output: 3

// Input: 2->4->6->7->5->1->NULL
// Output: 7


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int getMiddle(Node* head) {
        Node* slowPtr = head;
        Node* fastPtr = head;
        
        while(fastPtr != NULL && fastPtr->next != NULL) {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }
        
        if(fastPtr != NULL && fastPtr->next != NULL) {
            return slowPtr->next->data;
        }
        
        return slowPtr->data;
    }
};
