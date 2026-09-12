// ******** You are given the head of a singly linked list, you have to left rotate the linked list k times. Return the head of the modified linked list. ********

// <======== Example ========>
// Input: k = 4, head: 10->20->30->40->50->NULL
// Output: 50 -> 10 -> 20 -> 30 -> 40

// Input: k = 6, head: 10->20->30->40->NULL
// Output: 30 -> 40 -> 10 -> 20 


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    Node* rotate(Node* head, int k) {
        Node* curr = head;
        int totalCount = 0;
        
        if(head == NULL) {
            return head;
        }
        
        while(curr != NULL) {
            totalCount++;
            curr = curr->next;
        }
        
        k = k % totalCount;
        if(k == 0) {
            return head;
        }
        
        curr = head;
        for(int i = 1; i < k; i++) {
            curr = curr->next;
        }
        
        Node* newHead = curr->next;
        Node* temp = newHead;
        curr->next = NULL;
        
        while(temp->next != NULL) {
            temp = temp->next;
        }
        
        temp->next = head;
        return newHead;
    }
};
