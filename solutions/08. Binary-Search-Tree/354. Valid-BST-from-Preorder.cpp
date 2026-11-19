// ******** You are given a preorder traversal A, of a Binary Search Tree. Find if it is a valid preorder traversal of a BST. ********
// Note --> Binary Search Tree by definition has distinct keys and duplicates in binary search tree are not allowed.

// <======== Example ========>
// Input: A = [7, 7, 10, 10, 9, 5, 2, 8]
// Output: 0


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




int Solution::solve(vector<int> &A) {
    int n = A.size();
    stack<int> st;
    int minValue = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        if(A[i] <= minValue) {
            return 0;
        }
        
        while(!st.empty() && A[i] > st.top()) {
            minValue = st.top();
            st.pop();
        }
        
        if(!st.empty() && A[i] == st.top()) {
            return 0;
        }
        
        st.push(A[i]);
    }
    
    return 1;
}
