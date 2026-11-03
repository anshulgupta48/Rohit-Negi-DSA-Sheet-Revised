// ******** Given the root of a binary tree, find the diameter of the binary tree. The diameter of a binary tree is defined as the number of edges on the longest path between any two nodes. Note that this path may or may not pass through the root of the tree. ********

// <======== Example ========>
// Input: root = [1, 2, N, 3, 4]
// Output: 2

// Input: root = [5, 8, 6, 3, 7, 9, N]
// Output: 4


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    int getHeight(Node* root) {
        if(root == NULL) {
            return 0;
        }
        
        int ans = 1 + max(getHeight(root->left), getHeight(root->right));
        return ans;
    }
    
    int diameter(Node* root) {
        if(root == NULL) {
            return 0;
        }
        
        int leftDiameter = diameter(root->left);
        int rightDiameter = diameter(root->right);
        int mixDiameter = getHeight(root->left) + getHeight(root->right);
        int ans = max(mixDiameter, max(leftDiameter, rightDiameter));
        return ans;
    }
};
