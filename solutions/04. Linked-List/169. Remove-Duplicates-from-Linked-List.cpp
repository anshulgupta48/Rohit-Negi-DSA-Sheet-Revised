// ******** Given a head of an unsorted linked list. Remove duplicate elements from this unsorted Linked List. When a value appears in multiple nodes, the node which appeared first should be kept, all other duplicates are to be removed. ********

// <======== Example ========>
// Input: head = 5 -> 2 -> 2 -> 4
// Output: 5 -> 2 -> 4

// Input: head = 2 -> 2 -> 2 -> 2 -> 2
// Output: 2


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    Node* removeDuplicates(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        map<int, int> mp;
        
        while(curr != NULL) {
            if(mp.count(curr->data) >= 1) {
                prev->next = curr->next;
            } else {
                mp[curr->data]++;
                prev = curr;
            }
            
            curr = curr->next;
        }
        
        return head;
    }
};
