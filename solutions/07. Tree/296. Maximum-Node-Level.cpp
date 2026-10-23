// ******** Given a Binary tree, find the level in the binary tree which has the maximum number of nodes. Root is considered at level 0. ********

// <======== Example ========>
// Input: root = [2, 1, 3, 4, 6, N, 8, N, N, 5]
// Output: 2

// Input: root = [2, 1, 3, 4, 7, N, 8, N, N, 5]
// Output: 2


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    int maxNodeLevel(Node *root) {
        int ans = 0;
        int count = -1;
        int maxSize = 0;
        queue<Node*> q;
        q.push(root);
        
        if(root == NULL) {
            return ans;
        }
        
        while(!q.empty()) {
            int size = q.size();
            count++;
            
            if(size > maxSize) {
                ans = count;
                maxSize = size;
            }
            
            for(int i = 0; i < size; i++) {
                Node* currNode = q.front();
                q.pop();
                
                if(currNode->left) {
                    q.push(currNode->left);
                }
                if(currNode->right) {
                    q.push(currNode->right);
                }
            }
        }
        
        return ans;
    }
};
