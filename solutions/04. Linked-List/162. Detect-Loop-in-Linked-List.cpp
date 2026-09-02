// ******** You are given the head of a singly linked list. You have to determine whether the given linked list contains a loop or not. A loop exists in a linked list if the next pointer of the last node points to any other node in the list (including itself), rather than being null. ********
// Note --> Internally, pos(1 based index) is used to denote the position of the node that tail's next pointer is connected to. If pos = 0, it means the last node points to null. Note that pos is not passed as a parameter.

// <======== Example ========>
// Input: pos = 2, 1->3->4->3
// Output: true

// Input: pos = 0, 1->8->3->4->NULL
// Output: false

// Input: pos = 1, 1->7->8->10->1
// Output: true


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    bool detectLoop(Node* head) {
        Node* slowPtr = head;
        Node* fastPtr = head;
        
        while(fastPtr != NULL && fastPtr->next != NULL) {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
            
            if(slowPtr == fastPtr) {
                return true;
            }
        }
        
        return false;
    }
};
