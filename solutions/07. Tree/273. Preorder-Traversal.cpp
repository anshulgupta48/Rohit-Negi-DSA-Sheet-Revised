// ******** Given the root of a binary tree, return its preorder traversal.  A preorder traversal first visits the node, then visits the left child (including its entire subtree), and finally visits the right child (including its entire subtree). ********

// <======== Example ========>
// Input: root = [1, 4, N, 4, 2]
// Output: [1, 4, 4, 2]

// Input: root = [6, 3, 2, N, 1, 2, N]
// Output: [6, 3, 1, 2, 2]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution {
  public:
    void checkNodes(Node* root, vector<int> &ans) {
        if(root == NULL) {
            return;
        }
        
        ans.push_back(root->data);
        checkNodes(root->left, ans);
        checkNodes(root->right, ans);
    }

    vector<int> preOrder(Node* root) {
        vector<int> ans;
        checkNodes(root, ans);
        return ans;
    }
};
