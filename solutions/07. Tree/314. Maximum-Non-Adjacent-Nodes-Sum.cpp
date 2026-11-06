// ******** Given the root of a binary tree with integer values. Your task is to select a subset of nodes such that the sum of their values is maximized, with the condition that no two selected nodes are directly connected that is, if a node is included in the subset, neither its parent nor its children can be included. ********

// <======== Example ========>
// Input: root = [11, 1, 2]
// Output: 11

// Input: root = [1, 2, 3, 4, N, 5, 6]
// Output: 16


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    pair<int, int> findMaxSum(Node* root) {
        if(root == NULL) {
            return {0, 0};
        }
        
        pair<int, int> leftSum = findMaxSum(root->left);
        pair<int, int> rightSum = findMaxSum(root->right);
        pair<int, int> ans;
        ans.first = root->data + leftSum.second + rightSum.second;
        ans.second = max(leftSum.first, leftSum.second) + max(rightSum.first, rightSum.second);
        return ans;
    }
    
    int getMaxSum(Node *root) {
        pair<int, int> ans = findMaxSum(root);
        return max(ans.first, ans.second);
    }
};
