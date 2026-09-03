// ******** Given the head of a sorted singly linked list, remove all duplicate nodes so that each element appears only once. The resulting linked list should remain sorted. ********
// Note --> Try to solve the problem without using extra space.

// <======== Example ========>
// Input: Head: 2->2->4->5
// Output: 2 -> 4 -> 5

// Input: Head: 2->2->2->2->2
// Output: 2


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    Node* removeDuplicates(Node* head) {
        Node* temp = head;
        
        while(temp->next != NULL) {
            if(temp->data == temp->next->data) {
                temp->next = temp->next->next;
            } else {
                temp = temp->next;
            }
        }
        
        return head;
    }
};
