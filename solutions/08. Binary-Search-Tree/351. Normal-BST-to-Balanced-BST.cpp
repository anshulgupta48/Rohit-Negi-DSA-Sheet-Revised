// ******** Given a root of a Binary Search Tree, modify and return the given BST such that it is balanced and has minimum possible height. If there is more than one answer, return any of them. ********
// Note --> The height of balanced BST returned by you will be compared with the expected height of the balanced tree.

// <======== Example ========>
// Input: root[] = [30, 20, N, 10, N]
// Output: 2

// Input: root[] = [4, 3, 5, 2, N, N, 6, 1, N, N, 7]
// Output: 3


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    void checkNodes(Node* root, vector<Node*> &arr) {
        if(root == NULL) {
            return;
        }
        
        checkNodes(root->left, arr);
        arr.push_back(root);
        checkNodes(root->right, arr);
    }
    
    Node* createBST(int start, int end, vector<Node*> &arr) {
        if(start > end) {
            return NULL;
        }
        
        int mid = start + (end-start) / 2;
        arr[mid]->left = createBST(start, mid-1, arr);
        arr[mid]->right = createBST(mid+1, end, arr);
        return arr[mid];
    }
    
    Node* balanceBST(Node* root) {
        vector<Node*> arr;
        checkNodes(root, arr);
        int n = arr.size();
        return createBST(0, n-1, arr);
    }
};
