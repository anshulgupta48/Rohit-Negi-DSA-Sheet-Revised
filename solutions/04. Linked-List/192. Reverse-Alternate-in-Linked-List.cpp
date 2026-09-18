// ******** Given a singly linked list, perform the following operations: Extract all alternate nodes starting from the second node. Reverse the extracted list, Append the reversed list at the end of the remaining list. Return head of the final modified list. ********
// Note --> Try to solve the problem without using any extra memory.

// <======== Example ========>
// Input: 12->14->16->18->20->NULL
// Output: 12->16->20->18->14->NULL

// Input: 10->4->9->1->3->5->9->4->NULL
// Output: 10->9->3->9->4->5->1->4->NULL


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    Node* reverseLinkedList(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        
        while(curr != NULL) {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
    
    void rearrange(Node* head) {
        Node* prev = head;
        Node* temp1 = head->next;
        Node* temp2 = head->next;
        
        while(temp1 != NULL && temp1->next != NULL) {
            prev->next = temp1->next;
            prev = temp1->next;
            temp1->next = prev->next;
            temp1 = prev->next;
        }
        
        temp2 = reverseLinkedList(temp2);
        prev->next = temp2;
    }
};
