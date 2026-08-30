// ******** Given the heads of two singly linked lists, head1 and head2, the task is to determine whether the two linked lists are identical. Two linked lists are considered identical if they have the same number of nodes and each corresponding node contains the same data in the same order. Return true if both lists are identical; otherwise, return false. ********

// <======== Example ========>
// Input: head1: 1->2->3->4->5->6, head2: 99->59->42->20
// Output: false

// Input: head1: 1->2->3->4->5, head2: 1->2->3->4->5
// Output: true


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    bool areIdentical(Node *head1, Node *head2) {
        Node* temp1 = head1;
        Node* temp2 = head2;
        
        while(temp1 != NULL && temp2 != NULL) {
            if(temp1->data != temp2->data) {
                return false;
            }
            
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        if(temp1 != NULL || temp2 != NULL) {
            return false;
        }
        return true;
    }
};
