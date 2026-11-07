// ******** Given an array parent[] where each index represents a node and parent[i] gives the parent’s index, with -1 indicating the root. Your task is to construct the binary tree in standard linked-node form (each node having left and right pointers) based and return the root. If two elements have the same parent, the one that appears first in the array will be the left child and the other is the right child. You don't need to print anything, the driver code will print the level order traversal of the returned root node to verify the output. ********

// <======== Example ========>
// Input: parent[] = [-1, 0, 0, 1, 1, 3, 5]
// Output: [0, 1, 2, 3, 4, N, N, 5, N, N, N, 6]

// Input: parent[] = [2, 0, -1]
// Output: [2, 0, N, 1]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    Node* createTree(vector<int>& parent) {
        int n = parent.size();
        map<int, Node*> mp;
        Node* root = NULL;
        
        for(int i = 0; i < n; i++) {
            mp[i] = new Node(i);
        }
        
        for(int i = 0; i < n; i++) {
            int element = i;
            int parentElement = parent[i];
            
            if(parentElement == -1) {
                root = mp[i];
            } else {
                Node* parentNode = mp[parentElement];
                Node* childNode = mp[i];
                
                if(parentNode->left == NULL) {
                    parentNode->left = childNode;
                } else {
                    parentNode->right = childNode;
                }
            }
        }
        
        return root;
    }
};
