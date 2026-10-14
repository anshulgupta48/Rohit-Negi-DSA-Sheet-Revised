// ******** Given the root of a binary tree, return the size of the tree. The size of a binary tree is the total number of nodes in the tree. ********

// <======== Example ========>
// Input: root = [1, 2, 3]
// Output: 3

// Input: root = [5, 1, 6, 3, 7, 4]
// Output: 6


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    int getSize(Node* root) {
        if(root == NULL) {
            return 0;
        }
        
        int ans = 1 + getSize(root->left) + getSize(root->right);
        return ans;
    }
};
