// ******** Given a binary tree, task is to return its top view. The top view of a binary tree is the set of nodes visible when the tree is viewed from the top. Return the nodes from the leftmost node to the rightmost node. If multiple nodes overlap at the same horizontal position, only the topmost (closest to the root) node is included in the view. ********

// <======== Example ========>
// Input: root = [1, 2, 3]
// Output: [2, 1, 3]

// Input: root = [10, 20, 30, 40, 60, 90, 100]
// Output: [40, 20, 10, 30, 100]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    vector<int> topView(Node *root) {
        vector<int> ans;
        map<int, int> mp;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        
        while(!q.empty()) {
            auto currNode = q.front();
            Node* firstNode = currNode.first;
            int line = currNode.second;
            q.pop();
            
            if(mp[line] == NULL) {
                mp[line] = firstNode->data;
            }
            
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
