// ******** Given the root of a binary tree, find the maximum difference between an ancestor node A and its descendant node B, i.e., maximize A - B. ********

// <======== Example ========>
// Input: root[] = [5, 2, 1]
// Output: 4

// Input: root[] = [1, 2, 3, N, N, N, 7]
// Output: -1


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    int findMaxDiff(Node* root, int &ans) {
        if(root == NULL) {
            return INT_MAX;
        }
        
        int leftMin = findMaxDiff(root->left, ans);
        int rightMin = findMaxDiff(root->right, ans);
        
        if(root->left != NULL) {
            ans = max(ans, root->data-leftMin);
        }
        if(root->right != NULL) {
            ans = max(ans, root->data-rightMin);
        }
        
        return min(root->data, min(leftMin, rightMin));
    }
    
    int maxDiff(Node* root) {
        int ans = INT_MIN;
        findMaxDiff(root, ans);
        return ans;
    }
};
