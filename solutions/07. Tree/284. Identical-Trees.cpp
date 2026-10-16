// ******** Given two binary trees with their root nodes r1 and r2, return true if both of them are identical, otherwise return false. ********
// Note --> Two trees are identical when they have the same data and the arrangement of the data is also same.

// <======== Example ========>
// Input: r1 = [1, 2, 3, 4], r2 = [1, 2, 3, 4]
// Output: true

// Input: r1 = [1, 2, 3, 4], r2 = [1, 2, 3, N, N, 4]
// Output: false


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    bool isIdentical(Node* r1, Node* r2) {
        if(r1 == NULL && r2 == NULL) {
            return true;
        }
        else if((r1 == NULL && r2 != NULL) || (r1 != NULL && r2 == NULL)) {
            return false;
        }
        else if(r1->data != r2->data) {
            return false;
        }
        
        bool ans = isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right);
        return ans;
    }
};
