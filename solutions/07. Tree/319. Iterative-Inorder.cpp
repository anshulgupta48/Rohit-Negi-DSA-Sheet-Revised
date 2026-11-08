// ******** Given a binary tree. Find the inorder traversal of the tree without using recursion. ********

// <======== Example ========>
// Input: root = [1, 2, 3, 4, 5]
// Output: 4 2 5 1 3

// Input: root = [8, 1, 5, 7, 10, 6, 10, 6]
// Output: 1 7 10 8 6 10 5 6


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    vector<int> inOrder(Node* root) {
        vector<int> ans;
        
        while(root != NULL) {
            if(root->left == NULL) {
                ans.push_back(root->data);
                root = root->right;
            } else {
                Node* currNode = root->left;
                while(currNode->right && currNode->right != root) {
                    currNode = currNode->right;
                }
                
                if(currNode->right == NULL) {
                    currNode->right = root;
                    root = root->left;
                } else {
                    currNode->right = NULL;
                    ans.push_back(root->data);
                    root = root->right;
                }
            }
        }
        
        return ans;
    }
};
