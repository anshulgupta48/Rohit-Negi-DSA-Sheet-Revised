// ******** Given postorder traversal of a Binary Search Tree, you need to construct a BST from postorder traversal. The output will be inorder traversal of the constructed BST. ********

// <======== Example ========>
// Input: post[] = [1, 7, 5, 50, 40, 10]
// Output: [1, 5, 7, 10, 40, 50]

// Input: post[] = [2, 1, 3, 5]
// Output: [1, 2, 3, 5]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    Node* createBST(vector<int> arr, int &index, int minValue, int maxValue) {
        if((index < 0) || (arr[index] <= minValue) || (arr[index] >= maxValue)) {
            return NULL;
        }
        
        Node* root = new Node(arr[index--]);
        root->right = createBST(arr, index, root->data, maxValue);
        root->left = createBST(arr, index, minValue, root->data);
        return root;
    }
    
    Node* constructTree(vector<int>& post) {
        int n = post.size();
        int index = n-1;
        return createBST(post, index, INT_MIN, INT_MAX);
    }
};
