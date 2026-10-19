// ******** Given a binary tree, find the value of the node whose two immediate children have the maximum GCD. If multiple nodes have the same maximum GCD, return the maximum value among those nodes. A node is considered only if it has both a left and a right child. Return 0 if no such node exists. ********

// <======== Example ========>
// Input: root[] = [4, 5, 2, 3, 1, 6, 12]
// Output: 3

// Input: root[] = [1, 3, 5, 6, 9, 4, 8]
// Output: 5


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    int checkNodes(Node* root, int &ans, int &maxGCDValue) {
        if(root == NULL) {
            return -1;
        }
        
        int left = checkNodes(root->left, ans, maxGCDValue);
        int right = checkNodes(root->right, ans, maxGCDValue);
        int gcd = __gcd(left, right);
        
        if(left != -1 && right != -1 && gcd > maxGCDValue) {
            maxGCDValue = gcd;
            ans = root->data;
        }
        else if(gcd == maxGCDValue) {
            ans = max(ans, root->data);
        }
        
        return root->data;
    }

    int maxGCD(Node* root) {
        if(root == NULL) {
            return 0;
        }
        
        int ans = 0;
        int maxGCDValue = 0;
        checkNodes(root, ans, maxGCDValue);
        return ans;
    }
};
