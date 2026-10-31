// ******** Consider lines of slope -1 passing between nodes. Given a Binary Tree A containing N nodes, return all diagonal elements in a binary tree belonging to same line. ********
// Note --> See Sample Explanation for better understanding. Order does matter in the output. To get the same order as in the output traverse the tree same as we do in pre-order traversal.

// <======== Example ========>
// Input: root = [1, 4, 2, 8, 5, 3, 9, 7, 6]
// Output: [1, 2, 3, 4, 5, 7, 6, 8, 9]

// Input: root = [11, 20, 12, 1, 15, 13, 2, 7, 16, 22, 34]
// Output: [11, 12, 13, 20, 15, 17, 16, 1, 2, 22, 34]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




vector<int> Solution::solve(TreeNode* A) {
    vector<int> ans;
    queue<TreeNode*> q;
    q.push(A);
    
    while(!q.empty()) {
        TreeNode* currNode = q.front();
        q.pop();
        
        while(currNode != NULL) {
            ans.push_back(currNode->val);
            if(currNode->left) {
                q.push(currNode->left);
            }
            currNode = currNode->right;
        }
    }
    
    return ans;
}
