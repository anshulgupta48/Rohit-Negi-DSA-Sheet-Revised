// ******** Given the head of two sorted linked lists consisting of nodes respectively. Merge both lists and return the head of the sorted merged list. ********

// <======== Example ========>
// Input: head1: 5->10->15->40->NULL, head2: 2->3->20->NULL
// Output: 2 -> 3 -> 5 -> 10 -> 15 -> 20 -> 40

// Input: head1: 1->1->NULL, head2: 2->4->NULL
// Output: 1 -> 1 -> 2 -> 4


// Expected Time Complexity ==> O(n+m)
// Expected Auxiliary Space ==> O(n+m)




class Solution{
    public:
    Node* sortedMerge(Node* head1, Node* head2) {
        Node* curr1 = head1;
        Node* curr2 = head2;
        Node* ans = new Node(-1);
        Node* temp = ans;
        
        while(curr1 != NULL && curr2 != NULL) {
            if(curr1->data <= curr2->data) {
                temp->next = curr1;
                curr1 = curr1->next;
            } else {
                temp->next = curr2;
                curr2 = curr2->next;
            }
            
            temp = temp->next;
        }
        
        while(curr1 != NULL) {
            temp->next = curr1;
            curr1 = curr1->next;
            temp = temp->next;
        }
        
        while(curr2 != NULL) {
            temp->next = curr2;
            curr2 = curr2->next;
            temp = temp->next;
        }
        
        return ans->next;
    }
};
