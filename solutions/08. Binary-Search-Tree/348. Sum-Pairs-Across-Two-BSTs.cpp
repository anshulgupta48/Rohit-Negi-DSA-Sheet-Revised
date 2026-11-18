// ******** You are given the roots of two BSTs, root1 and root2, and an integer x, returns the count of all pairs of (a, b), where a belongs to one BST and b belongs to another BST, such that a + b = x. ********

// <======== Example ========>
// Input: root1 = [2, 1, 3], root2 = [5, 4, 6], x = 6
// Output: 2

// Input: root1 = [7, 5, 10, 1], root2 = [2, N, 6], x = 9
// Output: 1


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    void checkNodes(Node* root, vector<int> &arr) {
        if(root == NULL) {
            return;
        }
        
        checkNodes(root->left, arr);
        arr.push_back(root->data);
        checkNodes(root->right, arr);
    }
    
    int countPairs(Node* root1, Node* root2, int x) {
        int count = 0;
        vector<int> arr1;
        vector<int> arr2;
        checkNodes(root1, arr1);
        checkNodes(root2, arr2);
        set<int> st(arr1.begin(), arr1.end());
        
        for(int i = 0; i < arr2.size(); i++) {
            int diff = (x - arr2[i]);
            
            if(st.find(diff) != st.end()) {
                count++;
            }
        }
        
        return count;
    }
};
