// ******** Given a binary tree, find the sum of values of all the nodes. ********

// <======== Example ========>
// Input: root = [15, 10, 20, 8, 12, 16, 25]
// Output: 106

// Input: root = [1, 3, 2]
// Output: 6

// Input: root = [1, 2, N, 4, N]
// Output: 7


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    int sumBT(Node* root) {
        if(root == NULL) {
            return 0;
        }
        
        int ans = root->data + sumBT(root->left) + sumBT(root->right);
        return ans;
    }
};
