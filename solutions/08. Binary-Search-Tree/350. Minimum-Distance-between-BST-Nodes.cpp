// ******** Given the root of a Binary Search Tree (BST), return the minimum difference between the values of any two different nodes in the tree. ********

// <======== Example ========>
// Input: root = [4,2,6,1,3]
// Output: 1

// Input: root = [1,0,48,null,null,12,49]
// Output: 1


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
public:
    void checkNodes(TreeNode* root, vector<int> &arr) {
        if(root == NULL) {
            return;
        }

        checkNodes(root->left, arr);
        arr.push_back(root->val);
        checkNodes(root->right, arr);
    }

    int minDiffInBST(TreeNode* root) {
        int ans = INT_MAX;
        vector<int> arr;
        checkNodes(root, arr);
        int n = arr.size();

        for(int i = 0; i < n-1; i++) {
            ans = min(ans, arr[i+1]-arr[i]);
        }

        return ans;
    }
};
