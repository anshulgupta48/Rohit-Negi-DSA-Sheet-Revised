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
            curr = curr->next;
            head = curr;
            return head;
        }
        
        while(count < x-1) {
            count++;
            curr = curr->next;
        }
        
        if(curr->next->next == NULL) {
            Node* nodeToDelete = curr->next;
            nodeToDelete->prev = NULL;
            nodeToDelete->next = NULL;
            curr->next = NULL;
            return head;
        }
        
        Node* nodeToDelete = curr->next;
        nodeToDelete->prev = NULL;
        nodeToDelete->next->prev = curr;
        curr->next = nodeToDelete->next;
        nodeToDelete->next = NULL;
        return head;
    }
};
