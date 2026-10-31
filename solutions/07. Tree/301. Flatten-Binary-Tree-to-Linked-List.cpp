// ******** Given a binary tree A, flatten it to a linked list in-place. The left child of all nodes should be NULL. ********

// <======== Example ========>
// Input: root = [1, 2, 3]
// Output: [1, 2, 3]

// Input: root = [1, 2, 5, 3, 4, 6]
// Output: [1, 2, 3, 4, 5, 6]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




TreeNode* Solution::flatten(TreeNode* A) {
    if(A == NULL) {
        return NULL;
    }
    
    TreeNode* leftNode = flatten(A->left);
    TreeNode* rightNode = flatten(A->right);
    TreeNode* temp = A->right;
    A->right = A->left;
    A->left = NULL;
    
    TreeNode* temp2 = A;
    while(temp2->right != NULL) {
        temp2 = temp2->right;
    }
    temp2->right = temp;
    return A;
}
