// ******** Given a Binary Search Tree, find the minimum in the given BST. ********

// <======== Example ========>
// Input: root = [5, 4, 6, 3, N, N, 7, 1]
// Output: 1

// Input: root = [10, 5, 20, 2]
// Output: 2


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution {
  public:
    int minValue(Node* root) {
        if(root == NULL) {
            return -1;
        }
        
        while(root->left != NULL) {
            root = root->left;
        }
        
        return root->data;
    }
};
