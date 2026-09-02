// ******** You are given the head of a Linked List. You have to move the last element to the front of the Linked List and return the head the modified linked list. ********

// <======== Example ========>
// Input: head: 2->5->6->2->1
// Output: 1->2->5->6->2

// Input: head: 2
// Output: 2


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    Node *moveToFront(Node *head) {
        Node* temp = head;
        
        while(temp->next->next != NULL) {
            temp = temp->next;
        }
        
        temp->next->next = head;
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};
