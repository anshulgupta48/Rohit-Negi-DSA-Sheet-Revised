// ******** Given a binary tree, find its maximum level (the deepest level that contains at least one node). Root is considered at level 1. ********

// <======== Example ========>
// Input: root = [1, 3, 2, 4, N, N, N]
// Output: 3

// Input: root = [10, 20, 30, N, 40, N, 60, N, N, 2, N, N, N]
// Output: 4


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    int maxLevel(Node *root) {
        if(root == NULL) {
            return 0;
        }
        
        int ans = 1 + max(maxLevel(root->left), maxLevel(root->right));
        return ans;
    }
};
