// ******** Given the head of a sorted linked list, remove all nodes that have duplicate values, retaining only nodes whose values appear exactly once. Return the head of the updated linked list. ********

// <======== Example ========>
// Input: head = 23 -> 28 -> 28 -> 35 -> 49 -> 49
// Output: 23->35->NULL

// Input: head = 11 -> 11 -> 75 -> 75
// Output: NULL


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    Node* removeDuplicates(Node* head) {
        Node* ans = new Node(-1);
        ans->next = head;
        Node* prev = ans;
        Node* curr = head;
        
        if(head == NULL || head->next == NULL) {
            return head;
        }
        
        while(curr != NULL && curr->next != NULL) {
            Node* temp = curr;
            while(curr != NULL && curr->data == temp->data) {
                curr = curr->next;
            }
            
            if(temp->data == temp->next->data) {
                prev->next = curr;
            } else {
                prev = temp;
            }
        }
        
        return ans->next;
    }
};
