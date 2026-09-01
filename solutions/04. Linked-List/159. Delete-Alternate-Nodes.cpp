// ******** Given a singly linked list, delete all the nodes present at even positions. The first node is considered to be at position 1. After deleting the alternate nodes, return the modified linked list. ********

// <======== Example ========>
// Input: list[] = [1, 2, 3, 4, 5, 6]
// Output: [1, 3, 5]

// Input: list[] = [99, 59, 42, 20]
// Output: [99, 42]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    void deleteAlt(Node *head) {
        Node* temp = head;
        
        while(temp != NULL && temp->next != NULL) {
            temp->next = temp->next->next;
            temp = temp->next;
        }
    }
};
