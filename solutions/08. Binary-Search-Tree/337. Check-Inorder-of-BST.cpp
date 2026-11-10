// ******** Given an array arr[] of size n containing unique elements, check whether it represents the inorder traversal of a Binary Search Tree (BST) or not. ********

// <======== Example ========>
// Input: arr[] = [19, 23, 25, 30, 45]
// Output: true

// Input: arr[] = [19, 23, 30, 25, 45]
// Output: false


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution {
  public:
    bool doesRepresentBST(vector<int> &arr) {
        int n = arr.size();
        
        for(int i = 0; i < n-1; i++) {
            if(arr[i] >= arr[i+1]) {
                return false;
            }
        }
        
        return true;
    }
};
