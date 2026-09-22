// ******** Given a stack of n integers, determine whether its elements are pairwise consecutive. Starting from the top of the stack, group the elements into consecutive pairs. A pair is said to be pairwise consecutive if the absolute difference between the two elements is exactly 1. The two elements in a pair may be in either increasing or decreasing order. If the stack contains an odd number of elements, the topmost element is not included in any pair. Return true if every pair in the stack is pairwise consecutive. Otherwise, return false. ********
// Note --> The original contents and order of the stack must remain unchanged after the function returns.

// <======== Example ========>
// Input: stack = [4, 5, -2, -3, 11, 10, 5, 6, 20]
// Output: true

// Input: stack = [4, 6, 7, 8, 10, 11]
// Output: false


// Expected Time Complexity ==> O(1)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    bool pairWiseConsecutive(stack<int>& st) {
        if(st.size()%2 != 0) {
            st.pop();
        }
        
        while(!st.empty()) {
            int firstNum = st.top();
            st.pop();
            int secondNum = st.top();
            st.pop();
            
            if(abs(firstNum-secondNum) != 1) {
                return false;
            }
        }
        
        return true;
    }
};
