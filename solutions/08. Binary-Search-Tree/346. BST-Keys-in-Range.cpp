// ******** Given the root of a Binary Search Tree (BST) and two integers low and high, return all node values that lie in the inclusive range [low, high] in ascending order. ********

// <======== Example ========>
// Input: root = [17, 4, 18, 2, 9, N, N], l = 4, h = 17
// Output: [4, 9, 17]

// Input: root = [16, 7, 20, 1, 10, N, N], l = 13, h = 23
// Output: [16, 20]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    vector<int> nodesInRange(Node *root, int low, int high) {
        vector<int> ans;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()) {
            Node* currNode = q.front();
            q.pop();
            
            if(currNode->data >= low && currNode->data <= high) {
                ans.push_back(currNode->data);
            }
            
            if(currNode->left) {
                q.push(currNode->left);
            }
            if(currNode->right) {
                q.push(currNode->right);
            }
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};
