// ******** Given the head of a singly linked list. Reverse the linked list and return the head of the reversed list. ********

// <======== Example ========>
// Input: 1->2->3->4->NULL
// Output: 4 -> 3 -> 2 -> 1

// Input: 2->7->10->9->8->NULL
// Output: 8 -> 9 -> 10 -> 7 -> 2

// Input: 8->NULL
// Output: 8


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    Node* reverseList(Node* head) {
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while(curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
};
