// ******** Given the root of a BST and an integer k, find the kth smallest element in the BST. If there is no kth smallest element present then return -1. ********

// <======== Example ========>
// Input: root = [20, 8, 22, 4, 12, N, N, N, N, 10, 14], k = 3
// Output: 10

// Input: root = [2, 1, 3], k = 5
// Output: -1


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    void checkNodes(Node *root, vector<int> &ans) {
        if(root == NULL) {
            return;
        }
        
        checkNodes(root->left, ans);
        ans.push_back(root->data);
        checkNodes(root->right, ans);
    }
    
    int kthSmallest(Node *root, int k) {
        vector<int> ans;
        checkNodes(root, ans);
        int n = ans.size();
        
        if(k > n) {
            return -1;
        }
        
        return ans[k-1];
    }
};
