// ******** Given two Binary Trees A and B, you need to merge them in a single binary tree. The merge rule is that if two nodes overlap, then sum of node values is the new value of the merged node. Otherwise, the non-null node will be used as the node of new tree. ********

// <======== Example ========>
// Input: A=[2, 1, 4, 5], B=[3, 6, 1, 2, 7]
// Output: [5, 7, 5, 5, 2, 7]

// Input: A=[12, 11, 14], B=[3, 6, 1]
// Output: [15, 17, 15]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




TreeNode* Solution::solve(TreeNode* A, TreeNode* B) {
    if(A == NULL || B == NULL) {
        return (A ? A : B);
    }
    
    A->val += B->val;
    A->left = solve(A->left, B->left);
    A->right = solve(A->right, B->right);
    return A;
}
