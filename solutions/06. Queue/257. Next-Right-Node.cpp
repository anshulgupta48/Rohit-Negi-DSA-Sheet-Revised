// ******** Given root of a binary tree and an integer key, return the node immediately to the right of the node containing key on the same level. If the given node is the rightmost node of its level or the key is not present in the tree, return a node with value -1. ********

// <======== Example ========>
// Input: root = [10 2 6 8 4 N 5], key = 2
// Output: 6

// Input: root = [10 2 6 8 4 N 5], key = 5
// Output: -1


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    Node *nextRight(Node *root, int key) {
        queue<Node*> q;
        q.push(root);
        bool isKeyPresent = false;
        
        while(!q.empty()) {
            int n = q.size();
            
            for(int i = 0; i < n; i++) {
                Node* curr = q.front();
                q.pop();
                
                if(curr->left) {
                    q.push(curr->left);
                }
                if(curr->right) {
                    q.push(curr->right);
                }
                
                if(isKeyPresent) {
                    return curr;
                }
                if(curr->data == key) {
                    isKeyPresent = true;
                }

                if(i == n-1 && isKeyPresent) {
                    return new Node(-1);
                }
            }
        }
        
        return new Node(-1);
    }
};
