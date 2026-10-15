// ******** Given the root of a binary tree, determine if it is height-balanced or not. ********
// Note --> A binary tree is considered height-balanced if the absolute difference in heights of the left and right subtrees is at most 1 for every node in the tree.

// <======== Example ========>
// Input: root = [10, 20, 30, 40, 60]
// Output: true

// Input: root = [1, 2, 3, 4, N, N, N, 5]
// Output: false


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    int height(Node* root) {
        if(root == NULL) {
            return -1;
        }
        
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        int ans = 1 + max(leftHeight, rightHeight);
        return ans;
    }

    bool isBalanced(Node* root) {
        if(root == NULL) {
            return true;
        }
        else if(abs(height(root->left)-height(root->right)) > 1) {
            return false;
        }
        
        bool ans = isBalanced(root->left) && isBalanced(root->right);
        return ans;
    }
};
