// ******** A binary tree is said to be foldable if its left and right subtrees are mirror images of each other in terms of structure only (Values stored in the nodes are not considered). Given the root of a binary tree, find if the tree is foldable. ********
// Note --> An empty tree is also considered foldable.

// <======== Example ========>
// Input: root[] = [10, 7, 15, N, 9, 11, N]
// Output: true

// Input: root[] = [10, 7, 15, 5, N, 11, N]
// Output: false


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    bool checkNodes(Node* root1, Node* root2) {
        if(root1 == NULL && root2 == NULL) {
            return true;
        }
        else if((root1 != NULL && root2 == NULL) || (root1 == NULL && root2 != NULL)) {
            return false;
        }
        
        bool ans = checkNodes(root1->left, root2->right) && checkNodes(root1->right, root2->left);
        return ans;
    }
    
    bool isFoldable(Node* root) {
        if(root == NULL) {
            return true;
        }
        
        return checkNodes(root->left, root->right);
    }
};
