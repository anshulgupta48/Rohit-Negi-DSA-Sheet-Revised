// ******** Given a Circular linked list. The task is split into two Circular Linked lists. If there are an odd number of nodes in the given circular linked list then out of the resulting two halved lists, the first list should have one node more than the second list. ********

// <======== Example ========>
// Input: LinkedList : 10->4->9
// Output: 10->4, 9

// Input: LinkedList : 10->4->9->10
// Output: 10->4, 9->10


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    pair<Node *, Node *> splitList(struct Node *head) {
        Node* slowPtr = head;
        Node* fastPtr = head;
        
        while(fastPtr->next != head && fastPtr->next->next != head) {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }
        
        if(fastPtr->next != head) {
            fastPtr = fastPtr->next;
        }
        
        Node* head1 = head;
        Node* head2 = slowPtr->next;
        slowPtr->next = head1;
        fastPtr->next = head2;
        return {head1, head2};
    }
};
