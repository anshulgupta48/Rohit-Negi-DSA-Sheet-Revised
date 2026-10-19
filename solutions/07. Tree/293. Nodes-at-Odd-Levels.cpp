// ******** Given a binary tree, return a sorted list of all node values that appear at odd levels of the tree. The root is considered to be at level 1. ********

// <======== Example ========>
// Input: root = [1, 2, 3, 4, 5, N, 7]
// Output: [1, 4, 5, 7]

// Input: root = [1, 2, 3, 4, 5, N, 6, N, N, 7, 8, 9]
// Output: [1, 4, 5, 6]


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    vector<int> nodesAtOddLevels(Node *root) {
        if(root == NULL) {
            return {};
        }
        
        vector<int> ans;
        queue<Node*> q;
        q.push(root);
        int level = 1;
        
        while(!q.empty()) {
            int n = q.size();
            
            for(int i = 0; i < n; i++) {
                Node* currNode = q.front();
                q.pop();
                
                if(level%2 == 1) {
                    ans.push_back(currNode->data);
                }
                
                if(currNode->left) {
                    q.push(currNode->left);
                }
                if(currNode->right) {
                    q.push(currNode->right);
                }
            }
            
            level++;
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};
