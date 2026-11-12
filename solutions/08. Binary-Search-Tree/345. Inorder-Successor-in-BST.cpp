// ******** Given a BST, and a reference to a Node k in the BST. Find the Inorder Successor of the given node in the BST. If there is no successor, return -1. ********

// <======== Example ========>
// Input: root = [2, 1, 3], k = 2
// Output: 3

// Input: root = [20, 8, 22, 4, 12, N, N, N, N, 10, 14], k = 8
// Output: 10


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution {
  public:
    int inOrderSuccessor(Node *root, Node *k) {
        if(root == NULL || k == NULL) {
            return -1;
        }
        
        Node* temp = NULL;
        while(root != NULL) {
            if(root->data <= k->data) {
                root = root->right;
            } else {
                temp = root;
                root = root->left;
            }
        }
        
        int ans = (temp != NULL) ? temp->data : -1;
        return ans;
    }
};
