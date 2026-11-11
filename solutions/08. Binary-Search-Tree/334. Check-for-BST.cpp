// ******** Given a binary tree, check whether it is a Binary Search Tree (BST) or not. A binary tree is considered a BST if it satisfies the following properties: All nodes in the left subtree of a node have values less than the node's value. All nodes in the right subtree of a node have values greater than the node's value. Both the left and right subtrees are also Binary Search Trees. Return true if the given binary tree is a BST; otherwise, return false. ********

// <======== Example ========>
// Input: root = [2, 1, 3, N, N, N, 5]
// Output: true

// Input: root = [2, N, 7, N, 6, N, 9]
// Output: false


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution {
  public:
    bool checkBST(Node* root, int minElement, int maxElement) {
        if(root == NULL) {
            return true;
        }
        else if(root->data <= minElement || root->data >= maxElement) {
            return false;
        }
        
        bool ans = checkBST(root->left, minElement, root->data) && checkBST(root->right, root->data, maxElement);
        return ans;
    }
    
    bool isBST(Node* root) {
        bool ans = checkBST(root, INT_MIN, INT_MAX);
        return ans;
    }
};
