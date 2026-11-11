// ******** Given a binary search tree, write a function to find the kth smallest element in the tree. ********
// Note --> You may assume 1 <= k <= Total number of nodes in BST.

// <======== Example ========>
// Input: root[] = [2, 1, 3], k = 2
// Output: 2


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




void checkNodes(TreeNode* root, vector<int> &ans) {
    if(root == NULL) {
        return;
    }
    
    checkNodes(root->left, ans);
    ans.push_back(root->val);
    checkNodes(root->right, ans);
}

int Solution::kthsmallest(TreeNode* A, int B) {
    vector<int> ans;
    checkNodes(A, ans);
    sort(ans.begin(), ans.end());
    return ans[B-1];
}
