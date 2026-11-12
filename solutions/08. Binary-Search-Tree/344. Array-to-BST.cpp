// ******** Given a sorted array arr[]. Convert it into a Height Balanced Binary Search Tree (BST) and return the root of the BST. Height-balanced BST means a binary tree in which the depth of the left subtree and the right subtree of every node never differ by more than 1. ********
// Note --> You can return any BST, the driver code will check the BST, and print true if it is a Height-balanced BST else print false.

// <======== Example ========>
// Input: arr[] = [10, 20, 30]
// Output: true

// Input: arr[] = [1, 5, 9, 14, 23, 27]
// Output: true


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution {
  public:
    Node* createBST(int start, int end, vector<int> arr) {
        if(start > end) {
            return NULL;
        }
        
        int mid = start + (end-start) / 2;
        Node* root = new Node(arr[mid]);
        root->left = createBST(start, mid-1, arr);
        root->right = createBST(mid+1, end, arr);
        return root;
    }
    
    Node* sortedArrayToBST(vector<int>& arr) {
        int n = arr.size();
        int start = 0;
        int end = n-1;
        return createBST(start, end, arr);
    }
};
