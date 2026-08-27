// ******** You are given the head of a singly linked list. Return an array containing the values of the nodes. ********

// <======== Example ========>
// Input: 1-->2-->3-->4-->5-->NULL
// Output: [1, 2, 3, 4, 5]

// Input: 10-->20-->30-->40-->50-->60-->NULL
// Output: [10, 20, 30, 40, 50, 60]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    vector<int> printList(Node *head) {
        Node* temp = head;
        vector<int> ans;
        
        while(temp != NULL) {
            ans.push_back(temp->data);
            temp = temp->next;
        }
        
        return ans;
    }
};
