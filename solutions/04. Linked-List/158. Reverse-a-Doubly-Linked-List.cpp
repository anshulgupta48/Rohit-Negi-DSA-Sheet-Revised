// ******** Given the head of a doubly linked list, reverse the list and return the head of the reversed doubly linked list. ********
// Note --> Driver code will print the returned list in both forward and backward directions.

// <======== Example ========>
// Input: 3 <-> 4 <-> 5
// Output: 5 <-> 4 <-> 3

// Input: 75 <-> 122 <-> 59 <-> 196
// Output: 196 <-> 59 <-> 122 <-> 75


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    Node *reverse(Node *head) {
        Node* curr = head;
        
        while(curr != NULL) {
            Node* prev = curr->prev;
            Node* next = curr->next;
            
            curr->prev = next;
            curr->next = prev;
            head = curr;
            curr = next;
        }
        
        return head;
    }
};
