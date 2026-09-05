// ******** Given the head of a linked list and an integer x, delete the node at position x and return the updated head of the linked list. ********
// Note --> Positions use 1-based indexing.

// <======== Example ========>
// Input: x = 4, 1->2->3->4->5->NULL
// Output: 1 -> 2 -> 3 -> 5

// Input: x = 6, 2->5->7->8->99->100->NULL
// Output: 2 -> 5 -> 7 -> 8 -> 99


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    Node* deleteNode(Node* head, int x) {
        int count = 1;
        Node* temp = head;
        
        if(x == 1) {
            return head->next;
        }
        
        while(temp != NULL) {
            if(count == x-1) {
                temp->next = temp->next->next;
            }
            
            count++;
            temp = temp->next;
        }
        
        return head;
    }
};
