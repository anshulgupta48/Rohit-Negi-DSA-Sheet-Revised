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
    void checkNodes(Node* root, vector<int> &ans) {
        if(root == NULL) {
            return;
        }
        else if(root->left != NULL && root->right == NULL) {
            ans.push_back(root->left->data);
        }
        else if(root->left == NULL && root->right != NULL) {
            ans.push_back(root->right->data);
        }
        
        checkNodes(root->left, ans);
        checkNodes(root->right, ans);
    }
    
    vector<int> noSibling(Node* root) {
        vector<int> ans;
        checkNodes(root, ans);
        
        if(ans.size() == 0) {
            return {-1};
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};
