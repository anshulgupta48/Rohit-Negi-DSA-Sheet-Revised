// ******** Given the root of a binary tree. Remove all half nodes from the tree. A half node is a node that has exactly one child (either a left child or a right child). When a half node is removed, its only child takes its place and gets connected directly to the removed node's parent. Return the root of the modified tree after all half nodes have been removed. ********

// <======== Example ========>
// Input: root[] = [5, 7, 8, 2]
// Output: [5, 2, 8]

// Input: root[] = [3, 1, 2]
// Output: [3, 1, 2]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    Node* removeHalfNodes(Node* root) {
        if(root == NULL) {
            return NULL;
        }
        
        root->left = removeHalfNodes(root->left);
        root->right = removeHalfNodes(root->right);
        
        if((root->left && root->right) || (!root->left && !root->right)) {
            return root;
        }
        
        if(root->left && !root->right) {
            Node* ans = root->left;
            root->left = NULL;
            return ans;
        }
        else if(!root->left && root->right) {
            Node* ans = root->right;
            root->right = NULL;
            return ans;
        }
    }
};
