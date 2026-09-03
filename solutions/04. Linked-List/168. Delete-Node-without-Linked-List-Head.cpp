// ******** Given a node x in a singly linked list, delete this node without access to the head of the linked list. The driver code will print the updated linked list to verify the deletion. ********
// Note --> It is guaranteed that x is not the last node of the linked list.

// <======== Example ========>
// Input: x = 1, 1->2->NULL
// Output: 2

// Input: x = 20, 10->20->4->30->NULL
// Output: 10 -> 4 -> 30


// Expected Time Complexity ==> O(1)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    void deleteNode(Node* x) {
        Node* temp = x->next;
        x->data = temp->data;
        x->next = temp->next;
    }
};
