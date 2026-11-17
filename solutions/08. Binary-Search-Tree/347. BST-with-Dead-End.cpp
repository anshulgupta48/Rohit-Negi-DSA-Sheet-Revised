// ******** Given a root of Binary Search Tree (BST) containing unique positive integers greater than 0. Find if the BST contains a dead end. A dead end is a leaf node in the BST such that no new node can be inserted in the BST at or below this node while maintaining the BST property and the constraint that all node values must be > 0. ********

// <======== Example ========>
// Input: root[] = [8, 5, 9, 2, 7, N, N, 1]
// Output: true

// Input: root[] = [8, 7, 10, 2, N, 9, 13]
// Output: true


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution {
  public:
    bool checkDeadEnd(Node *root, int minValue, int maxValue) {
        if(root == NULL) {
            return false;
        }
        else if((root->data-minValue == 1) && (maxValue-root->data == 1)) {
            return true;
        }
        
        bool leftDeadEnd = checkDeadEnd(root->left, minValue, root->data);
        bool rightDeadEnd = checkDeadEnd(root->left, root->data, maxValue);
        return (leftDeadEnd || rightDeadEnd);
    }
    
    bool isDeadEnd(Node *root) {
        if(root == NULL) {
            return true;
        }
        
        bool ans = checkDeadEnd(root, 0, 100001);
        return ans;
    }
};
