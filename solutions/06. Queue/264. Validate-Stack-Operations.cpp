// ******** You have an empty stack and can perform push and pop operations in it. Given two arrays a[] and b[] of unique elements and both having the same length. a[] represents the order in which elements are pushed into a stack. b[] represents the order in which elements are expected to be popped from the stack. Determine whether the given push and pop sequences are valid. ********
// Note --> The stack is empty initially and must also be empty after performing all the operations.

// <======== Example ========>
// Input: a[] = [1, 2, 3], b[] = [2, 1, 3]
// Output: true

// Input: a[] = [1, 2, 3], b[] = [3, 1, 2]
// Output: false


// Expected Time Complexity ==> O(n+m)
// Expected Auxiliary Space ==> O(n+m)




class Solution {
  public:
    bool validateOp(vector<int>& a, vector<int>& b) {
        int i = 0;
        int j = 0;
        stack<int> st;
        
        while(i < a.size() && j < b.size()) {
            while(!st.empty() && st.top() == b[j]) {
                st.pop();
                j++;
            }
            
            st.push(a[i]);
            i++;
        }
        
        while(!st.empty() && st.top() == b[j]) {
            st.pop();
            j++;
        }
        
        return (i == j);
    }
};
