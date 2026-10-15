// ******** Given the root of a binary tree, find the maximum depth of the tree. ********
// Note --> The maximum depth or height of the tree is the number of edges in the tree from the root to the deepest node.

// <======== Example ========>
// Input: root = [12, 8, 18, 5, 11]
// Output: 2

// Input: root = [1, 2, 3, 4, N, 10, 5, N, N, N, N, 6, 7]
// Output: 3


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    int height(Node* root) {
        if((root == NULL) || (root->left == NULL && root->right == NULL)) {
            return 0;
        }
        
        int ans = 1 + max(height(root->left), height(root->right));
        return ans;
    }
};
