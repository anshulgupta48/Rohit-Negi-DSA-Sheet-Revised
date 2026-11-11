// ******** Implement an iterator over a binary search tree (BST). Your iterator will be initialized with the root node of a BST. The first call to next() will return the smallest number in BST. Calling next() again will return the next smallest number in the BST, and so on. ********
// Note --> next() and hasNext() should run in average O(1) time and uses O(h) memory, where h is the height of the tree. Try to optimize the additional space complexity apart from the amortized time complexity.

// <======== Example ========>
// Input: root[] = [2, 1, 3], k = 2
// Output: 2


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




vector<TreeNode*> nodes;
int nodeIndex;

void createInorder(TreeNode* root){
    if(!root) {
        return;
    }

    createInorder(root->left);
    nodes.push_back(root);
    createInorder(root->right);
}

BSTIterator::BSTIterator(TreeNode *root) {
    nodes.clear();
    nodeIndex = 0;
    createInorder(root);
}

bool BSTIterator::hasNext() {
    return (nodeIndex < nodes.size());
}

int BSTIterator::next() {
    return nodes[nodeIndex++]->val;
}
