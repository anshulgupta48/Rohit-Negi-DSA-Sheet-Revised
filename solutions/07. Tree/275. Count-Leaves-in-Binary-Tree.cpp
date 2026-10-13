// ******** Given a Binary Tree of size n, You have to count leaves in it. For example, there are two leaves in the following tree. ********

// <======== Example ========>
// Input: root = [4, 8, 10, 7, 5, 1, 3]
// Output: 3

// Input: root = [50, 30, 70, 20, 40, 60, 65, 80]
// Output: 4


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution {
  public:
    int countLeaves(Node* root) {
        if(root == NULL) {
            return 0;
        }
        else if(root->left == NULL && root->right == NULL) {
            return 1;
        }
        
        int ans = countLeaves(root->left) + countLeaves(root->right);
        return ans;
    }
};
