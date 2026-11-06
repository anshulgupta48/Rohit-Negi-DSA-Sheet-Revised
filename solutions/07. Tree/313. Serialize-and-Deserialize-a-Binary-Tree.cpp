// ******** Given the root of a binary tree. You have to perform Serialization and Deserialization. Serialization is to store a tree in an array so that it can be later restored and deserialization is reading tree back from the array. Complete the functions: serialize() : stores the tree into an array and returns the array. deSerialize() : deserializes the array to the tree and returns the root of the tree. ********
// Note --> Multiple nodes can have the same data and the node values are always positive integers. Your code will be correct if the tree returned by deSerialize(serialize(input_tree)) is same as the input tree. Driver code will print the level order traversal of the tree returned by deSerialize(serialize(input_tree)).

// <======== Example ========>
// Input: root = [1, 2, 3]
// Output: [1, 2, 3]

// Input: root = [10, 20, 30, 40, 60, N, N]
// Output: [10, 20, 30, 40, 60]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    vector<int> serialize(Node *root) {
        vector<int> ans;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()) {
            Node* currNode = q.front();
            q.pop();
            
            if(currNode == NULL) {
                ans.push_back(-1);
                continue;
            }
            
            ans.push_back(currNode->data);
            q.push(currNode->left);
            q.push(currNode->right);
        }
        
        return ans;
    }

    Node *deSerialize(vector<int> &arr) {
        int index = 0;
        queue<Node*> q;
        Node* root = new Node(arr[index]);
        q.push(root);
        index++;
        
        while(!q.empty()) {
            Node* currNode = q.front();
            q.pop();
            
            if(arr[index] != -1) {
                currNode->left = new Node(arr[index]);
                q.push(currNode->left);
            }
            index++;

            if(arr[index] != -1) {
                currNode->right = new Node(arr[index]);
                q.push(currNode->right);
            }
            index++;
        }
        
        return root;
    }
};
