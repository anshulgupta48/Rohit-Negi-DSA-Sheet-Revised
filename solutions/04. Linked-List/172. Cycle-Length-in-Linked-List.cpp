// ******** Given the head of a linked list. A linked list contains a cycle if its last node is connected to a previous node. If the given list contains a cycle, return the length of the cycle. Otherwise, return 0. ********
// Note --> Internally, the driver code uses an integer x to represent the position (1-based indexing) of the node to which the last node is connected. If x = 0, it means last node points to null which indicating there is no loop.

// <======== Example ========>
// Input: 1->2->3->4->5->2
// Output: 4

// Input: 25->14->19->33->10->19
// Output: 3

// Input: 1->2->3->4->5->NULL
// Output: 0


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int lengthOfLoop(Node *head) {
        int count = 1;
        Node* slowPtr = head;
        Node* fastPtr = head;
        bool isLoopExited = false;
        
        while(fastPtr != NULL && fastPtr->next != NULL) {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
            
            if(slowPtr == fastPtr) {
                isLoopExited = true;
                break;
            }
        }
        
        if(isLoopExited == false) {
            return 0;
        }
        
        fastPtr = fastPtr->next;
        while(slowPtr != fastPtr) {
            count++;
            fastPtr = fastPtr->next;
        }
        
        return count;
    }
};
