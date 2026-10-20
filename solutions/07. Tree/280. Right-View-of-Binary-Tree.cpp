// ******** Given the root of a binary Tree. Return the right view of the binary tree. The right view of a Binary Tree is the set of nodes visible when the tree is viewed from the right side. ********

// <======== Example ========>
// Input: root = [1, 2, 3, N, N, 4, 5]
// Output: [1, 3, 5]

// Input: root = [1, 2, 3, 4, N, N, N, N, 5]
// Output: [1, 3, 4, 5]

// Input: root = [3]
// Output: [3]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    void getRightView(Node *root, int level, int &maxLevel, vector<int> &ans) {
        if(root == NULL) {
            return;
        }
        
        if(level > maxLevel) {
            maxLevel = level;
            ans.push_back(root->data);
        }
        
        getRightView(root->right, level+1, maxLevel, ans);
        getRightView(root->left, level+1, maxLevel, ans);
    }
    
    vector<int> rightView(Node *root) {
        vector<int> ans;
        int maxLevel = 0;
        getRightView(root, 1, maxLevel, ans);
        return ans;
    }
};
