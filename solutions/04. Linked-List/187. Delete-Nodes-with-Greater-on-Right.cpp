// ******** Given a singly linked list, remove all nodes that have a node with a greater value anywhere to their right in the list. Return the head of the modified linked list. ********

// <======== Example ========>
// Input: LinkedList = 12->15->10->11->5->6->2->3
// Output: 15->11->6->3

// Input: LinkedList = 10->20->30->40->50->60
// Output: 60


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    Node *compute(Node *head) {
        if(head == NULL) {
            return NULL;
        }
        
        Node* temp = compute(head->next);
        if(temp == NULL) {
            head->next = NULL;
        }
        else if(head->data < temp->data) {
            return temp;
        }
        else {
            head->next = temp;
        }

        return head;
    }
};
