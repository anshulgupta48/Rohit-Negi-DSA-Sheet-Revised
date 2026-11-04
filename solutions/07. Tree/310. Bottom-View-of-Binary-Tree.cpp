// ******** Given a binary tree, and your task is to return its bottom view. The bottom view of a binary tree is the set of nodes visible when the tree is viewed from the bottom. ********
// Note --> If there are multiple bottom-most nodes for a horizontal distance from the root, then the latter one in the level order traversal is considered.

// <======== Example ========>
// Input: root = [1, 2, 3, 4, 5, N, 6]
// Output: [4, 2, 5, 3, 6]

// Input: root = [20, 8, 22, 5, 3, 4, 25, N, N, 10, 14, N, N, 28, N]
// Output: [5, 10, 4, 28, 25]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    vector<int> bottomView(Node *root) {
        vector<int> ans;
        map<int, int> mp;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        
        while(!q.empty()) {
            auto currNode = q.front();
            Node* firstNode = currNode.first;
            int line = currNode.second;
            mp[line] = firstNode->data;
            q.pop();
            
            if(firstNode->left) {
                q.push({firstNode->left, line-1});
            }
            if(firstNode->right) {
                q.push({firstNode->right, line+1});
            }
        }
        
        for(auto x: mp) {
            ans.push_back(x.second);
        }
        
        return ans;
    }
};
