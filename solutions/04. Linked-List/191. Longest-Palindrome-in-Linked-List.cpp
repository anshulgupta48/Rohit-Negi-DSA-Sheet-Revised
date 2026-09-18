// ******** Given a linked list, find length of the longest palindrome list that exists in the given linked list. ********

// <======== Example ========>
// Input: Linked List: 2->3->7->3->2->12->24
// Output: 5

// Input: Linked List: 12->4->4->3->14
// Output: 2


// Expected Time Complexity ==> O(n2)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int getPalindromeLength(Node* temp1, Node* temp2) {
        int count = 0;
        
        while(temp1 != NULL && temp2 != NULL) {
            if(temp1->data == temp2->data) {
                count++;
            } else {
                break;
            }
            
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        return count;
    }
    
    int maxPalindrome(Node *head) {
        int ans = 0;
        Node* prev = NULL;
        Node* curr = head;
        
        while(curr != NULL) {
            Node* next = curr->next;
            curr->next = prev;
            ans = max(ans, (2*getPalindromeLength(prev, next)+1));
            ans = max(ans, (2*getPalindromeLength(curr, next)));
            prev = curr;
            curr = next;
        }
        
        return ans;
    }
};
