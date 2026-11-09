// ******** Given a Binary Search Tree and a node value key, return true if the node with value key is present in the BST; otherwise, return false. ********

// <======== Example ========>
// Input: root = [6, 2, 8, N, N, 7, 9], key = 8
// Output: true

// Input: root = [16, 12, 18, 10, N, 17, 19], key = 14
// Output: false


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution {
  public:
    bool search(Node* root, int key) {
        if(root == NULL) {
            return false;
        }
        else if(root->data == key) {
            return true;
        }
        
        if(root->data < key) {
            search(root->right, key);
        } else {
            search(root->left, key);
        }
    }
};
