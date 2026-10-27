// ******** Given a Binary Tree, find all nodes that do not have a sibling. Return the nodes in increasing order. ********
// Note --> The root node cannot have a parent, so it should not be included in the answer. If every node has a sibling, return a list containing only -1.

// <======== Example ========>
// Input: root = [37, 20, N, N, 113]
// Output: [20, 113]

// Input: root[] = [1, 2, 3, 4]
// Output: [4]

// Input: root[] = [37, 40, 13]
// Output: [-1]


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    vector<int> noSibling(Node* root) {
        vector<int> ans;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()) {
            Node* currNode = q.front();
            q.pop();
            
            if(currNode->left != NULL && currNode->right == NULL) {
                ans.push_back(currNode->left->data);
            }
            else if(currNode->left == NULL && currNode->right != NULL) {
                ans.push_back(currNode->right->data);
            }
            
            if(currNode->left) {
                q.push(currNode->left);
            }
            if(currNode->right) {
                q.push(currNode->right);
            }
        }
        
        if(ans.size() == 0) {
            ans.push_back(-1);
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};
