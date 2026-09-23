// ******** Given a string s, composed of different combinations of '(' , ')', '{', '}', '[', ']'. Determine whether the Expression is balanced or not. An expression is balanced if: Each opening bracket has a corresponding closing bracket of the same type. Opening brackets must be closed in the correct order. ********

// <======== Example ========>
// Input: s = "[{()}]"
// Output: true

// Input: s = "[()()]{}"
// Output: true

// Input: s = "([]"
// Output: false

// Input: s = "([{]})"
// Output: false


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    bool isMatchingParenthesis(char a, char b) {
        if((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']')) {
            return true;
        }
        
        return false;
    }
    
    bool isBalanced(string& s) {
        int n = s.size();
        stack<char> st;
        
        for(int i = 0; i < n; i++) {
            if((s[i] == '(') || (s[i] == '{') || (s[i] == '[')) {
                st.push(s[i]);
            } else {
                if(st.empty()) {
                    return false;
                }
                else if(isMatchingParenthesis(st.top(), s[i]) == false) {
                    return false;
                }
                else {
                    st.pop();
                }
            }
        }
        
        if(st.empty()) {
            return true;
        }
        return false;
    }
};
