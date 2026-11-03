// ******** Given the root of a Binary Tree with n nodes, check whether it is a Sum Tree and return true if it is, otherwise return false. A Sum Tree is a Binary Tree in which the value of every non-leaf node is equal to the sum of all nodes present in its left and right subtrees. An empty tree and a leaf node are also considered Sum Trees. ********

// <======== Example ========>
// Input: root[] = [3, 1, 2]
// Output: true

// Input: root[] = [10, 20, 30, 10, 10]
// Output: false


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    int findSum(Node* node) {
        if(node == NULL) {
            return 0;
        }
        
        int ans = node->data + findSum(node->left) + findSum(node->right);
        return ans;
    }
    
    bool isSumTree(Node* node) {
        if((node == NULL) || (node->left == NULL && node->right == NULL)) {
            return true;
        }
        
        int leftSum = findSum(node->left);
        int rightSum = findSum(node->right);
        bool ans = ((node->data == leftSum+rightSum) && isSumTree(node->left) && isSumTree(node->right));
        return ans;
    }
};
