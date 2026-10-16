// ******** Given the root of a Binary Tree, your task is to return its Level Order Traversal. ********
// Note --> A level order traversal is a breadth-first search (BFS) of the tree. It visits nodes level by level, starting from the root, and processes all nodes from left to right within each level before moving to the next.

// <======== Example ========>
// Input: root = [1, 2, 3]
// Output: [1, 2, 3]

// Input: root = [10, 20, 30, 40, 50, N, N]
// Output: [10, 20, 30, 40, 50]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    vector<int> levelOrder(Node *root) {
        vector<int> ans;
        if(root == NULL) {
            return ans;
        }
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()) {
            Node* temp = q.front();
            ans.push_back(temp->data);
            q.pop();
            
            if(temp->left) {
                q.push(temp->left);
            }
            if(temp->right) {
                q.push(temp->right);
            }
        }
        
        return ans;
    }
};
