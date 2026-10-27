// ******** Given a binary tree with distinct node values and two integers a and b, check whether the nodes with values a and b are cousins. ********
// Note --> Two nodes are cousins if they are at the same depth but have different parents.

// <======== Example ========>
// Input: root = [1, 2, 3], a = 2, b = 3
// Output: false

// Input: root = [1, 2, 3, 5, N, N, 4], a = 5, b = 4
// Output: true

// Input: root = [10, 5, 15, 3, 7, 12, 20], a = 7, b = 12
// Output: true


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n) 




class Solution {
  public:
    bool areCousins(Node* root, int a, int b) {
        vector<int> temp;
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        int p1 = 0;
        int p2 = 0;
        
        while(!q.empty()) {
            Node* currNode = q.front();
            q.pop();
            
            if(currNode != NULL) {
                temp.push_back(currNode->data);
                
                if(currNode->left) {
                    if(currNode->left->data == a || currNode->left->data == b) {
                        p1 = currNode->data;
                    }
                    q.push(currNode->left);
                }
                if(currNode->right) {
                    if(currNode->right->data == a || currNode->right->data == b) {
                        p2 = currNode->data;
                    }
                    q.push(currNode->right);
                }
            } else {
                int count = 0;
                
                if(currNode == NULL) {
                    for(int i = 0; i < temp.size(); i++) {
                        if(temp[i] == a || temp[i] == b) {
                            count++;
                        }
                    }
                    
                    temp.resize(0);
                    if(count == 2 && p1 != p2) {
                        return true;
                    }
                }
                
                if(!q.empty()) {
                    q.push(NULL);
                }
            }
        }
        
        return false;
    }
};
