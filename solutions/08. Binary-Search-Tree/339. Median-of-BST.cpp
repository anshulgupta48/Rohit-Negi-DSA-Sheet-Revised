// ******** You are given the root of a Binary Search Tree, find the median of it.  Let the nodes of the BST, when written in ascending order (inorder traversal), be represented as V1, V2, V3, …, Vn, where n is the total number of nodes in the BST. If number of nodes are even: return V(n/2). If number of nodes are odd: return V((n+1)/2). ********

// <======== Example ========>
// Input: root[] = [20, 8, 22, 4, 12, N, N, N, N, 10, 14]
// Output: 12

// Input: root[] = [5, 4, 8, 1]
// Output: 4


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    void checkNodes(Node* root, vector<int> &ans) {
        if(root == NULL) {
            return;
        }
        
        checkNodes(root->left, ans);
        ans.push_back(root->data);
        checkNodes(root->right, ans);
    }
    
    int findMedian(Node* root) {
        vector<int> ans;
        checkNodes(root, ans);
        int n = ans.size();
        
        if(n%2 == 0) {
            return ans[n/2-1];
        } else {
            return ans[n/2];
        }
    }
};
