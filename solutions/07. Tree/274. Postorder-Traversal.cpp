// ******** Given the root of a Binary Tree, return its Postorder Traversal. ********
// Note --> A postorder traversal first visits the left child (including its entire subtree), then visits the right child (including its entire subtree), and finally visits the node itself.

// <======== Example ========>
// Input: root = [19, 10, 8, 11, 13]
// Output: [11, 13, 10, 8, 19]

// Input: root = [11, 15, N, 7]
// Output: [7, 15, 11]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution {
  public:
    void checkNodes(Node* root, vector<int> &ans) {
        if(root == NULL) {
            return;
        }
        
        checkNodes(root->left, ans);
        checkNodes(root->right, ans);
        ans.push_back(root->data);
    }

    vector<int> postOrder(Node* root) {
        vector<int> ans;
        checkNodes(root, ans);
        return ans;
    }
};
