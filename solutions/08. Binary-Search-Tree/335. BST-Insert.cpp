// ******** Given a root of Binary Search Tree (BST) and an integer key, insert a new node with value key into the BST. Return the root of the modified tree after the insertion. ********
// Note --> If the key is already present in the BST, return the root.

// <======== Example ========>
// Input: root = [2, 1, 3], key = 4
// Output: [2, 1, 3, N, N, N, 4]

// Input: root = [2, 1, 3, N, N, N, 6], key = 4
// Output: [2, 1, 3, N, N, N, 6, 4]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution {
  public:
    Node* insert(Node* root, int key) {
        if(root == NULL || root->data == key) {
            return new Node(key);
        }
        
        if(root->data < key) {
            root->right = insert(root->right, key);
        } else {
            root->left = insert(root->left, key);
        }
        
        return root;
    }
};
