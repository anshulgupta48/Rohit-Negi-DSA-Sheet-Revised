// ******** Given the root of a binary tree where each node contains a single digit (0–9). Every root-to-leaf path represents a number formed by concatenating the digits along the path. Starting from the root, each next digit is appended to the current number (i.e., currentNumber = currentNumber × 10 + node->data). Return the sum of all the numbers formed by every root-to-leaf path. ********

// <======== Example ========>
// Input: root = [6, 3, 5, 2, 5, 4, 7, 4]
// Output: 13997

// Input: root = [1, 0, 9, 3, 0]
// Output: 222


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    void findSum(Node *root, int &ans, int num) {
        if(root == NULL) {
            return;
        }
        
        num = num + root->data;
        if(root->left == NULL && root->right == NULL) {
            ans = ans + num;
            return;
        }
        
        findSum(root->left, ans, num*10);
        findSum(root->right, ans, num*10);
    }
    
    int treePathsSum(Node *root) {
        int ans = 0;
        int num = 0;
        findSum(root, ans, num);
        return ans;
    }
};
