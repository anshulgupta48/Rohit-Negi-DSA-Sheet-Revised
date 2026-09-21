// ******** Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null. There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). It is -1 if there is no cycle. Note that pos is not passed as a parameter. ********

// <======== Example ========>
// Input: head = [3,2,0,-4], pos = 1
// Output: tail connects to node index 1

// Input: head = [1,2], pos = 0
// Output: tail connects to node index 0

// Input: head = [1], pos = -1
// Output: no cycle


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slowPtr = head;
        ListNode* fastPtr = head;

        while(fastPtr != NULL && fastPtr->next != NULL) {
            if(slowPtr == fastPtr) {
                break;
            }

            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }

        if(fastPtr == NULL || fastPtr->next == NULL) {
            return NULL;
        }

        slowPtr = head;
        while(slowPtr != fastPtr) {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next;
        }

        return slowPtr;
    }
};
