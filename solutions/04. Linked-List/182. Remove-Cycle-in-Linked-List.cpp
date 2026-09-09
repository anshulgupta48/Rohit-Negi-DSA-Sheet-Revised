// ******** Given the head of a singly linked list. A cycle exists if the last node points back to a previous node, forming a loop. Remove the loop from the linked list if it exists. Internally, the driver code uses a variable x (1-based indexing) to represent the position of the node to which the last node is connected. The driver code will print "true" if the linked list is correctly modified, otherwise it will print "false". ********

// <======== Example ========>
// Input: 1->3->4->3
// Output: true

// Input: 1->8->3->4->NULL
// Output: true

// Input: 1->2->3->4->1
// Output: true


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    void removeLoop(Node* head) {
        Node* slowPtr = head;
        Node* fastPtr = head;
        
        while(fastPtr != NULL && fastPtr->next != NULL) {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
            
            if(slowPtr == fastPtr) {
                break;
            }
        }
        
        if(fastPtr == NULL || fastPtr->next == NULL) {
            return;
        }
        
        slowPtr = head;
        while(slowPtr != fastPtr) {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next;
        }
        
        Node* temp = slowPtr;
        while(temp->next != slowPtr) {
            temp = temp->next;
        }
        temp->next = NULL;
    }
};
