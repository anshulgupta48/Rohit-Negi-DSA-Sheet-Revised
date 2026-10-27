// ******** Given a binary tree root[], find the largest values of all levels. ********

// <======== Example ========>
// Input: root[] = [1, 2, 3]
// Output: [1, 3]

// Input: root[] = [4, 9, 2, 3, 5, 7]
// Output: [4, 9, 7]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    vector<int> largestValues(Node* root) {
        vector<int> ans;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()) {
            int n = q.size();
            int maxElement = INT_MIN;
            
            for(int i = 0; i < n; i++) {
                Node* currNode = q.front();
                maxElement = max(maxElement, currNode->data);
                q.pop();
                
                if(currNode->left) {
                    q.push(currNode->left);
                }
                if(currNode->right) {
                    q.push(currNode->right);
                }
            }
            
            ans.push_back(maxElement);
        }
        
        return ans;
    }
};
