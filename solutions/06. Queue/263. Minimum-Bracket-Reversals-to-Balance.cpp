// ******** Given a string s consisting of only opening and closing curly brackets '{' and '}', find out the minimum reversals required to convert the string into a balanced expression. A reversal means changing '{' to '}' or vice-versa. ********

// <======== Example ========>
// Input: s = "}{{}}{{{"
// Output: 3

// Input: s = "{{}{{{}{{}}{{"
// Output: -1


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    int countMinReversals(string s) {
        int n = s.size();
        int count = 0;
        stack<char> st;
        
        if(n%2 == 1) {
            return -1;
        }
        
        for(int i = 0; i < n; i++) {
            if(s[i] == '}') {
                if(st.empty()) {
                    count++;
                    st.push('{');
                }
                else if(st.top() == '{') {
                    st.pop();
                }
            } else {
                st.push(s[i]);
            }
        }
        
        while(!st.empty()) {
            count++;
            st.pop();
            
            if(!st.empty()) {
                st.pop();
            }
        }
        
        return count;
    }
};
