// ******** Given a Binary Tree, convert it to Binary Search Tree in such a way that keeps the original structure of Binary Tree intact. ********

// <======== Example ========>
// Input: root = [1, 2, 3]
// Output: [1, 2, 3]

// Input: root = [10, 2, 7, 8, 4]
// Output: [2, 4, 7, 8, 10]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    void checkNodes(Node *root, vector<int> &ans) {
        if(root == NULL) {
            return;
        }
        
        checkNodes(root->left, ans);
        ans.push_back(root->data);
        checkNodes(root->right, ans);
    }
    
    void createBST(Node *root, vector<int> ans, int &index) {
        if(root == NULL) {
            return;
        }
        
        createBST(root->left, ans, index);
        root->data = ans[index++];
        createBST(root->right, ans, index);
    }
    
    Node *binaryTreeToBST(Node *root) {
        vector<int> ans;
        checkNodes(root, ans);
        sort(ans.begin(), ans.end());
        int index = 0;
        createBST(root, ans, index);
        return root;
    }
};
