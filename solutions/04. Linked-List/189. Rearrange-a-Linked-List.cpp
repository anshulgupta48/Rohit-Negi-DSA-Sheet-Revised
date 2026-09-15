// ******** Given a singly linked list, the task is to rearrange it in a way that all odd position nodes are together and all even position nodes are together. (Considering 1-based indexing.) ********
// Note --> You should place all odd-positioned nodes first and then the even-positioned ones. Also, the relative order of odd-positioned nodes and even-positioned nodes should be maintained.

// <======== Example ========>
// Input: head: 1->2->3->4
// Output: 1->3->2->4

// Input: head: 1->2->3->4->5
// Output: 1->3->5->2->4


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    void rearrangeEvenOdd(Node *head) {
        Node* oddList = head;
        Node* evenList = head->next;
        Node* evenListHead = evenList;
        
        while(evenList != NULL && evenList->next != NULL) {
            oddList->next = evenList->next;
            oddList = oddList->next;
            evenList->next = oddList->next;
            evenList = evenList->next;
        }
        
        oddList->next = evenListHead;
    }
};
