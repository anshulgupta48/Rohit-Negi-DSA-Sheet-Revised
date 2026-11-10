// ******** Given the root of a Binary Search Tree (BST) and an integer k, find the k-th largest element in the BST without modifying its structure. ********

// <======== Example ========>
// Input: root = [4, 2, 9], k = 2
// Output: 4

// Input: root = [10, 2, 11, 1, 5, N, N, N, N, 3, 6, N, 4], k = 7
// Output: 2

// Input: root = [4, 2, 9], k = 3
// Output: 2


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
    
    int kthLargest(Node *root, int k) {
        vector<int> ans;
        checkNodes(root, ans);
        reverse(ans.begin(), ans.end());
        return ans[k-1];
    }
};
