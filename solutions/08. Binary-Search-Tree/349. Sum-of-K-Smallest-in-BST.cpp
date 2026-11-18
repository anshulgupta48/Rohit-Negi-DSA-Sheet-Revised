// ******** Given a Binary Search Tree, find sum of k smallest nodes in it. You may assume that k is always smaller than or equal to size of the tree. ********

// <======== Example ========>
// Input: k = 3, root = [20, 8, 22, 4, 12, N, N, N, N, 10, 14]
// Output: 22

// Input: k = 2, root = [10, 5, 11, 4, 7, N, N, N, N, 6]
// Output: 9


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    void checkNodes(Node* root, vector<int> &arr) {
        if(root == NULL) {
            return;
        }
        
        checkNodes(root->left, arr);
        arr.push_back(root->data);
        checkNodes(root->right, arr);
    }
    
    int sum(Node* root, int k) {
        int ans = 0;
        vector<int> arr;
        checkNodes(root, arr);
        
        for(int i = 0; i < k; i++) {
            ans += arr[i];
        }
        
        return ans;
    }
};
