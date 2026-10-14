// ******** Given a Binary Tree of size n, your task is to return the count of all the non-leaf nodes of the given binary tree. ********

// <======== Example ========>
// Input: root[] = [1, 2, 3, 4, 5]
// Output: 2

// Input: root[] = [10, 5, 20, 3, 7, 15, 25]
// Output: 3

// Input: root[] = [8, 3, 9, 1, 6, 4, 7]
// Output: 3


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    int countNonLeafNodes(Node* root) {
        if(root == NULL || (root->left == NULL && root->right == NULL)) {
            return 0;
        }
        
        int ans = 1 + countNonLeafNodes(root->left) + countNonLeafNodes(root->right);
        return ans;
    }
};
