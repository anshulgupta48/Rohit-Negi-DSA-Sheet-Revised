// ******** Given a binary tree, Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to NULL. Initially, all next pointers are set to NULL. ********
// Note --> You may only use constant extra space. Recursion has memory overhead and does not qualify for constant space. The tree need not be a perfect binary tree.

// <======== Example ========>
// Input: root = [1, 2, 3, 4, 5, 6, 7]
// Output: [1, 2, 3, 4, 5, 6, 7]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




void Solution::connect(TreeLinkNode* A) {
    queue<TreeLinkNode*> q;
    q.push(A);
    
    while(!q.empty()) {
        int n = q.size();
        TreeLinkNode* prevNode = NULL;
        
        for(int i = 0; i < n; i++) {
            TreeLinkNode* currNode = q.front();
            q.pop();
            
            if(prevNode != NULL) {
                prevNode->next = currNode;
            }
            prevNode = currNode;
            
            if(currNode->left) {
                q.push(currNode->left);
            }
            if(currNode->right) {
                q.push(currNode->right);
            }
        }
    }
}
