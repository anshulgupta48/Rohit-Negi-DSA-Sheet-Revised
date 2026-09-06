// ******** Given two linked lists head1 and head2 with distinct elements, determine the count of all distinct pairs from both lists whose sum equals the given value x. ********
// Note --> A valid pair would be in the form (x, y) where x is from the first linked list and y is from the second linked list. (1, 3) and (3, 1) are considered different.

// <======== Example ========>
// Input: head1 = 1->2->3->4->5->6, head2 = 11->12->13, x = 15
// Output: 3

// Input: head1 = 7->5->1->3, head2 = 3->5->2->8, x = 10
// Output: 2


// Expected Time Complexity ==> O(n+m)
// Expected Auxiliary Space ==> O(n+m)




class Solution{
    public:
    int countPairs(Node* head1, Node* head2, int x) {
        int count = 0;
        Node* temp1 = head1;
        Node* temp2 = head2;
        map<int, int> mp;
        
        while(temp1 != NULL) {
            mp[temp1->data]++;
            temp1 = temp1->next;
        }
        
        while(temp2 != NULL) {
            int diff = (x - temp2->data);
            if(mp.find(diff) != mp.end()) {
                count++;
            }
            
            temp2 = temp2->next;
        }
        
        return count;
    }
};
