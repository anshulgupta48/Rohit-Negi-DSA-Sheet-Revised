// ******** Given a binary tree with nodes where all elements are unique, implement a function that deletes a node with a specified value (key) from the tree. When a node is deleted, the tree should shrink from the bottom, meaning the deleted node is replaced by the bottom-most, right-most node in the tree. After deletion, the binary tree will be printed using in-order traversal. ********

// <======== Example ========>
// Input: root[] = [10, 20, 30], key = 10
// Output: [20, 30]

// Input: root[] = [10, 20, 30, N, N, N, 40], key = 20
// Output: [40, 10, 30]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    Node* deleteNode(Node* root, int key) {
        if(root == NULL) {
            return root;
        }
        
        Node* keyNode = NULL;
        Node* lastNode = NULL;
        Node* parentOfLastNode = NULL;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()) {
            Node* currNode = q.front();
            q.pop();
            
            if(currNode->data == key) {
                keyNode = currNode;
            }
            
            if(currNode->left) {
                parentOfLastNode = currNode;
                q.push(currNode->left);
            }
            if(currNode->right) {
                parentOfLastNode = currNode;
                q.push(currNode->right);
            }
            lastNode = currNode;
        }
        
        if(keyNode != NULL) {
            keyNode->data = lastNode->data;
            
            if(parentOfLastNode != NULL && parentOfLastNode->right == lastNode) {
                parentOfLastNode->right = NULL;
            }
            else if(parentOfLastNode != NULL && parentOfLastNode->left == lastNode) {
                parentOfLastNode->left = NULL;
            }
            else {
                root = NULL;
            }
            
            delete lastNode;
        }
        
        return root;
    }
};
