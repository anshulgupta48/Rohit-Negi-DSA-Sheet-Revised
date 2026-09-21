// ******** Given a singly linked list, sort the list in ascending order. ********

// <======== Example ========>
// Input: head: 30->23->28->30->11->14->19->16->21->25
// Output: 11->14->16->19->21->23->25->28->30->30

// Input: head: 19->20->16->24->12->29->30
// Output: 12->16->19->20->24->29->30


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    Node* sortLL(Node* head) {
        Node* temp = head;
        map<int, int> mp;
        
        while(temp != NULL) {
            mp[temp->data]++;
            temp = temp->next;
        }
        
        temp = head;
        for(auto x: mp) {
            while(mp[x.first]) {
                temp->data = x.first;
                temp = temp->next;
                mp[x.first]--;
            }
        }
        
        return head;
    }
};
