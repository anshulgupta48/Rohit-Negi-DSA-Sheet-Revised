// ******** Given a root of a Binary Tree, return its boundary traversal in the following order: Left Boundary: Nodes from the root to the leftmost non-leaf node, preferring the left child over the right and excluding leaves. Leaf Nodes: All leaf nodes from left to right, covering every leaf in the tree. Reverse Right Boundary: Nodes from the root to the rightmost non-leaf node, preferring the right child over the left, excluding leaves, and added in reverse order. ********
// Note --> The root is included once, leaves are added separately to avoid repetition, and the right boundary follows traversal preference not the path from the rightmost leaf.

// <======== Example ========>
// Input: root = [1, 2, 3, 4, 5, 6, 7, N, N, 8, 9, N, N, N, N]
// Output: [1, 2, 4, 8, 9, 6, 7, 3]

// Input: root = [1, N, 2, N, 3, N, 4, N, N]
// Output: [1, 4, 3, 2]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    void getLeftNodes(Node *root, vector<int> &ans) {
        if((root == NULL) || (root->left == NULL && root->right == NULL)) {
            return;
        }
        
        ans.push_back(root->data);
        if(root->left) {
            getLeftNodes(root->left, ans);
        } else {
            getLeftNodes(root->right, ans);
        }
    }
    
    void getLeafNodes(Node *root, vector<int> &ans) {
        if(root == NULL) {
            return;
        }

        if(root->left == NULL && root->right == NULL) {
            ans.push_back(root->data);
            return;
        }

        getLeafNodes(root->left, ans);
        getLeafNodes(root->right, ans);
    }
    
    void getRightNodes(Node *root, vector<int> &ans) {
        if((root == NULL) || (root->left == NULL && root->right == NULL)) {
            return;
        }
        
        if(root->right) {
            getRightNodes(root->right, ans);
        } else {
            getRightNodes(root->left, ans);
        }
        ans.push_back(root->data);
    }
    
    vector<int> boundaryTraversal(Node *root) {
        vector<int> ans;
        if(root == NULL) {
            return ans;
        }
        
        if(root->left == NULL && root->right == NULL) {
            ans.push_back(root->data);
            return ans;
        }
        
        ans.push_back(root->data);
        getLeftNodes(root->left, ans);
        getLeafNodes(root, ans);
        getRightNodes(root->right, ans);
    }
};
