// ******** Given a Binary Tree, check whether the given Binary Tree is a prefect Binary Tree or not. A Binary tree is Perfect Binary Tree in which all internal nodes have two children and all leaves are at same level. ********

// <======== Example ========>
// Input: root[] = [7, 4, 9]
// Output: true

// Input: root[] = [7, 3, 8, 2, 5, N, 10, 1, N, N, N, N, N]
// Output: false


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    bool isPerfect(Node *root) {
        if(root == NULL) {
            return true;
        }
        
        queue<Node*> q;
        q.push(root);
        int checkSize = 1;
        
        while(!q.empty()) {
            int size = q.size();
            if(size != checkSize) {
                return false;
            }
            
            while(size--) {
                Node* currNode = q.front();
                q.pop();
                
                if(currNode->left) {
                    q.push(currNode->left);
                }
                if(currNode->right) {
                    q.push(currNode->right);
                }
            }
            
            checkSize = checkSize * 2;
        }
        
        return true;
    }
};
