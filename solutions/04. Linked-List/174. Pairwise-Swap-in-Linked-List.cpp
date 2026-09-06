// ******** Given the head of a singly linked list, swap every two adjacent nodes and return the new head. ********
// Note --> Try to swap the nodes, not only the data.

// <======== Example ========>
// Input: head = 1 -> 2 -> 3 -> 4 -> 5
// Output: 2 -> 1 -> 4 -> 3 -> 5

// Input: head = 8 -> 7 -> 5 -> 2 -> 1
// Output: 7 -> 8 -> 2 -> 5 -> 1


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    Node* pairwiseSwap(Node* head) {
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        Node* temp;
        
        while(curr != NULL && curr->next != NULL) {
            next = curr->next;
            temp = next->next;
            
            if(prev == NULL) {
                head = next;
            } else {
                prev->next = next;
            }
            
            next->next = curr;
            curr->next = temp;
            prev = curr;
            curr = temp;
        }
        
        return head;
    }
};
