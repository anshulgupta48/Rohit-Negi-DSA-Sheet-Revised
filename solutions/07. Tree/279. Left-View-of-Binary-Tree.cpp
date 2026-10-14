// ******** Given the root of a binary tree. Return the left view of the binary tree. The left view of a binary tree is the set of nodes visible when the tree is viewed from the left side. ********
// Note --> If the tree is empty, return an empty list.

// <======== Example ========>
// Input: root = [1, 2, 3, 4, 5, N, N]
// Output: [1, 2, 4]

// Input: root = [1, 2, 3, N, N, 4, N, N, 5, N, N]
// Output: [1, 2, 4, 5]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    void getLeftView(Node *root, int level, int &maxLevel, vector<int> &ans) {
        if(root == NULL) {
            return;
        }
        
        if(level > maxLevel) {
            ans.push_back(root->data);
            maxLevel = level;
        }
        
        getLeftView(root->left, level+1, maxLevel, ans);
        getLeftView(root->right, level+1, maxLevel, ans);
    }
  
    vector<int> leftView(Node *root) {
        vector<int> ans;
        int maxLevel = 0;
        getLeftView(root, 1, maxLevel, ans);
        return ans;
    }
};
