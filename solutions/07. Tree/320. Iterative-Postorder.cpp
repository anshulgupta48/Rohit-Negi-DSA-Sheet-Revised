// ******** Given a binary tree root[]. Find the postorder traversal of the tree without using recursion. Return a list containing the postorder traversal of the tree, calculated without using recursion. ********

// <======== Example ========>
// Input: root[] = [1, 2, 3, 4, 5]
// Output: [4, 5, 2, 3, 1]

// Input: root[] = [8, 1, 5, 7, 10, 6, 10, 6]
// Output: [10, 7, 1, 6, 10, 6, 5, 8]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    vector<int> postOrder(Node* root) {
        vector<int> ans;

        while(root != NULL) {
            if(root->right == NULL) {
                ans.push_back(root->data);
                root = root->left;
            } else {
                Node* currNode = root->right;
                while(currNode->left && currNode->left != root) {
                    currNode = currNode->left;
                }
    
                if(currNode->left == NULL) {
                    ans.push_back(root->data);
                    currNode->left = root;
                    root = root->right;
                } else {
                    currNode->left = NULL;
                    root = root->left;
                }
            }
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
