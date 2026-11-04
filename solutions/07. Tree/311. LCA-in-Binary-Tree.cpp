// ******** Given the root of a binary tree with all unique values and two nodes value, n1 and n2. Find the lowest common ancestor of the given two nodes. Both node values are always present in the Binary Tree. ********
// Note --> LCA is the first common ancestor of both the nodes n1 and n2 from bottom of tree.

// <======== Example ========>
// Input: root = [1, 2, 3, 4, 5, 6, 7], n1 = 4, n2 = 5
// Output: 2

// Input: root = [1, 2, 3, N, N, 6, 7, 8], n1 = 7, n2 = 8
// Output: 3


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    Node* lca(Node* root, int n1, int n2) {
        if(root == NULL) {
            return NULL;
        }
        else if(root->data == n1 || root->data == n2) {
            return root;
        }
        
        Node* leftNode = lca(root->left, n1, n2);
        Node* rightNode = lca(root->right, n1, n2);
        
        if(leftNode != NULL && rightNode != NULL) {
            return root;
        }
        else if(leftNode != NULL) {
            return leftNode;
        }
        else {
            return rightNode;
        }
    }
};
