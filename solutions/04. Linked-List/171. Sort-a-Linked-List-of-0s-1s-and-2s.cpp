// ******** Given the head of a linked list where nodes can contain values 0s, 1s, and 2s only. Your task is to rearrange the list so that all 0s appear at the beginning, followed by all 1s, and all 2s are placed at the end. ********

// <======== Example ========>
// Input: head = 1 → 2 → 2 → 1 → 2 → 0 → 2 → 2
// Output: 0 → 1 → 1 → 2 → 2 → 2 → 2 → 2

// Input: head = 2 → 2 → 0 → 1
// Output: 0 → 1 → 2 → 2


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    Node* segregate(Node* head) {
        Node* temp = head;
        int zerosCount = 0;
        int onesCount = 0;
        int twosCount = 0;
        
        while(temp != NULL) {
            if(temp->data == 0) {
                zerosCount++;
            }
            else if(temp->data == 1) {
                onesCount++;
            }
            else {
                twosCount++;
            }
            
            temp = temp->next;
        }
        
        temp = head;
        while(temp != NULL) {
            if(zerosCount) {
                zerosCount--;
                temp->data = 0;
            }
            else if(onesCount) {
                onesCount--;
                temp->data = 1;
            }
            else {
                twosCount--;
                temp->data = 2;
            }
            
            temp = temp->next;
        }
        
        return head;
    }
};
