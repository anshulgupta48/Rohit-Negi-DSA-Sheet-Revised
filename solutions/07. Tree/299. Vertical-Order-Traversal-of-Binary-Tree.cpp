// ******** Given a binary tree A consisting of N nodes, return a 2-D array denoting the vertical order traversal of A. Go through the example and image for more details. ********
// Note --> If 2 or more Tree Nodes shares the same vertical level then the one with earlier occurence in the level-order traversal of tree comes first in the output. Row 1 of the output array will be the nodes on leftmost vertical line similarly last row of the output array will be the nodes on the rightmost vertical line.

// <======== Example ========>
// Input: root = [6, 3, 7, 2, 5, 9]
// Output: [[2], [3], [6, 5], [7], [9]]

// Input: root = [1, 2, 3, 4, 5]
// Output: [[4], [2], [1, 5], [3]]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n) 




vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {
    vector<vector<int>> ans;
    map<int, vector<int>> mp;
    queue<pair<TreeNode*, int>> q;
    q.push({A, 0});
    
    if(!A) {
        return ans;
    }
    
    while(!q.empty()) {
        auto frontNode = q.front();
        q.pop();
        
        TreeNode* curr = frontNode.first;
        int hd = frontNode.second;
        mp[hd].push_back(curr->val);
        
        if (curr->left) {
            q.push({curr->left, hd-1});
        }
        if (curr->right) {
            q.push({curr->right, hd+1});
        }
    }
    
    for (auto &x: mp) {
        ans.push_back(x.second);
    }

    return ans;
}
