// ******** Given the root of a binary tree. Find the zig-zag level order traversal of the binary tree. ********
// Note --> In zig zag traversal we traverse the nodes from left to right for odd-numbered levels, and from right to left for even-numbered levels.

// <======== Example ========>
// Input: root = [1, 2, 3, 4, 5, 6, 7]
// Output: [1, 3, 2, 4, 5, 6, 7]

// Input: root = [7, 9, 7, 8, 8, 6, N, 10, 9]
// Output: [7, 7, 9, 8, 8, 6, 9, 10]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        vector<int> ans;
        stack<Node*> st1;
        stack<Node*> st2;
        st1.push(root);
        
        while(!st1.empty() || !st2.empty()) {
            if(!st1.empty()) {
                while(!st1.empty()) {
                    Node* temp = st1.top();
                    st1.pop();
                    ans.push_back(temp->data);
                    
                    if(temp->left) {
                        st2.push(temp->left);
                    }
                    if(temp->right) {
                        st2.push(temp->right);
                    }
                }
            } else {
                while(!st2.empty()) {
                    Node* temp = st2.top();
                    st2.pop();
                    ans.push_back(temp->data);
                    
                    if(temp->right) {
                        st1.push(temp->right);
                    }
                    if(temp->left) {
                        st1.push(temp->left);
                    }
                }
            }
        }
        
        return ans;
    }
};
