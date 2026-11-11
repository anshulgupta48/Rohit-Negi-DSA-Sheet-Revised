// ******** Given the roots r1 and r2 of two Binary Search Trees (BST), find all nodes that are present in both trees (the intersection of the two BSTs). Return the common node values in sorted order. ********

// <======== Example ========>
// Input: r1 = [5, 1, 10, 0, 4, 7, N, N, N, N, N, N, 9], r2 = [10, 7, 20, 4, 9, N, N]
// Output: [4, 7, 9, 10]

// Input: r1 = [10, 2, 11, 1, 3, N, N], r2 = [2, 1, 3]
// Output: [1, 2, 3]


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
    
    vector<int> findCommon(Node* r1, Node* r2) {
        vector<int> arr1;
        vector<int> arr2;
        vector<int> ans;
        checkNodes(r1, arr1);
        checkNodes(r2, arr2);
        
        int i = 0;
        int j = 0;
        while(i < arr1.size() && j < arr2.size()) {
            if(arr1[i] == arr2[j]) {
                ans.push_back(arr1[i]);
                i++;
                j++;
            }
            else if(arr1[i] < arr2[j]) {
                i++;
            }
            else {
                j++;
            }
        }
        
        return ans;
    }
};
