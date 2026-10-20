// ******** Given a root of a Binary Tree, your task is to return its Inorder Traversal. ********
// Note --> An inorder traversal first visits the left child (including its entire subtree), then visits the node, and finally visits the right child (including its entire subtree).

// <======== Example ========>
// Input: root = [1, 2, 3, 4, 5]
// Output: [4, 2, 5, 1, 3]

// Input: root = [8, 1, 5, N, 7, 10, 6, N, 10, 6]
// Output: [1, 7, 10, 8, 6, 10, 5, 6]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution {
  public:
    void checkNodes(Node* root, vector<int> &ans) {
        if(root == NULL) {
            return;
        }
        
        checkNodes(root->left, ans);
        ans.push_back(root->data);
        checkNodes(root->right, ans);
    }
    
    vector<int> inOrder(Node* root) {
        vector<int> ans;
        checkNodes(root, ans);
        return ans;
    }
};
