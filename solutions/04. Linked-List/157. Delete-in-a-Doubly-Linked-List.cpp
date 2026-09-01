// ******** Given the head of a doubly linked list and an integer x, delete the node at the xth position (1-based indexing) and return the head of the modified list. ********

// <======== Example ========>
// Input: x = 3, NULL<->1<->3<->4<->NULL
// Output: 1 <-> 3

// Input: x = 1, NULL<->1<->5<->2<->9<->NULL
// Output: 5 <-> 2 <-> 9


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    Node* delPos(Node* head, int x) {
        Node* curr = head;
        int count = 1;
        
        if(x == 1) {
            curr->next->prev = NULL;
            head = curr->next;
            return head;
        }
        
        while(curr->next != NULL) {
            if(count == x) {
                curr->prev->next = curr->next;
                curr->next->prev = curr->prev;
                curr->prev = NULL;
                curr->next = NULL;
                return head;
            }
            
            count++;
            curr = curr->next;
        }
        
        curr->prev->next = NULL;
        curr->prev = NULL;
        return head;
    }
};
