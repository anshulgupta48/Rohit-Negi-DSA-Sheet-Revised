// ******** Given two singly linked lists, create a new linked list that contains the union of elements present in both lists. Each element should appear only once in the resulting list (no duplicates allowed). The order of elements in the resulting list should be: First, include elements from the first list in the order they appear. Then include elements from the second list that were not already included, in their original order. ********

// <======== Example ========>
// Input: head1 = [9, 6, 4, 2, 3, 8], head2 = [1, 2, 8, 6, 2]
// Output: 9 -> 6 -> 4 -> 3 -> 8 -> 1 -> 2

// Input: head1 = [1, 5, 1, 2, 2, 5], head2 = [4, 5, 6, 7, 1]
// Output: 1 -> 5 -> 2 -> 4 -> 6 -> 7


// Expected Time Complexity ==> O(n+m)
// Expected Auxiliary Space ==> O(n+m)




class Solution{
    public:
    Node* makeUnion(Node* head1, Node* head2) {
        Node* temp1 = head1;
        Node* temp2 = head2;
        Node* ans = new Node(-1);
        Node* curr = ans;
        map<int, int> mp;
        
        while(temp1 != NULL) {
            if(mp.count(temp1->data) == 0) {
                Node* nodeToInsert = new Node(temp1->data);
                ans->next = nodeToInsert;
                ans = nodeToInsert;
            }
            mp[temp1->data]++;
            temp1 = temp1->next;
        }
        
        while(temp2 != NULL) {
            if(mp.count(temp2->data) == 0) {
                Node* nodeToInsert = new Node(temp2->data);
                ans->next = nodeToInsert;
                ans = nodeToInsert;
            }
            mp[temp2->data]++;
            temp2 = temp2->next;
        }
        
        ans = curr->next;
        return ans;
    }
};
