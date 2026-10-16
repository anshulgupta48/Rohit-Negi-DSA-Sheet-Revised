// ******** Given a binary tree, modify it so that it becomes its mirror. Mirror of a Binary Tree is obtained by interchanging left and right children of all non-leaf nodes. ********
// Note --> Changes should be done in-place and need not to return anything.

// <======== Example ========>
// Input: root = [1, 2, 3, N, N, 4]
// Output: [1, 3, 2, N, 4]

// Input: root = [1, 2, 3, 4, 5]
// Output: [1, 3, 2, N, N, 5, 4]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    void mirror(Node* root) {
        if(root == NULL) {
            return;
        }
        
        swap(root->left, root->right);
        mirror(root->left);
        mirror(root->right);
    }
};
