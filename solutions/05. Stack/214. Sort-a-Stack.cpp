// ******** Given a stack of integers st[]. Sort the stack in ascending order (smallest element at the bottom and largest at the top). ********

// <======== Example ========>
// Input: st[] = [41, 3, 32, 2, 11]
// Output: [41, 32, 11, 3, 2]

// Input: st[] = [3, 2, 1]
// Output: [3, 2, 1]


// Expected Time Complexity ==> O(n2)
// Expected Auxiliary Space ==> O(1)




class Solution {
  public:
    void sortedInsert(stack<int> &st, int x) {
        if(st.empty() || x > st.top()) {
            st.push(x);
            return;
        }
        
        int topElement = st.top();
        st.pop();
        sortedInsert(st, x);
        st.push(topElement);
    }
    
    void sortStack(stack<int> &st) {
        if(!st.empty()) {
            int x = st.top();
            st.pop();
            sortStack(st);
            sortedInsert(st, x);
        }
    }
};
