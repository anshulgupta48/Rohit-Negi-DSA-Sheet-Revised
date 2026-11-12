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
    bool findDeadEnd(Node *root, int minElement, int maxElement) {
        if(root == NULL) {
            return false;
        }
        
        if((root->data-minElement == 1) && (maxElement-root->data == 1)) {
            return true;
        }
        
        bool leftDeadEnd = findDeadEnd(root->left, minElement, root->data);
        bool rightDeadEnd = findDeadEnd(root->right, root->data, maxElement);;
        return (leftDeadEnd | rightDeadEnd);
    }
    
    bool isDeadEnd(Node *root) {
        return findDeadEnd(root, 0, 100001);
    }
};
