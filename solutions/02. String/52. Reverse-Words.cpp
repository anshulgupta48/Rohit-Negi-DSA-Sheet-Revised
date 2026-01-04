// ******** Given a string s, reverse the string without reversing its individual words. Words are separated by dots(.). ********
// Note --> The string may contain leading or trailing dots(.) or multiple dots(.) between two words. The returned string should only have a single dot(.) separating the words, and no extra dots should be included.

// <======== Example ========>
// Input: s = "i.like.this.program.very.much"
// Output: "much.very.program.this.like.i"

// Input: s = "..geeks..for.geeks."
// Output: "geeks.for.geeks"

// Input: s = "..home....."
// Output: "home"


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    string reverseWords(string &s) {
        int n = s.size();
        string ans = "";
        string temp = "";
        stack<string> st;
        
        for(int i = 0; i < n; i++) {
            if(s[i] == '.') {
                if(!temp.empty()) {
                    st.push(temp);
                    temp = "";
                }
            } else {
                temp += s[i];
            }
        }
        
        if(!temp.empty()) {
            st.push(temp);
        }
        
        while(st.size() > 0) {
            if(st.size() > 1) {
                ans = ans + st.top() + '.';
            } else {
                ans = ans + st.top();
            }
            st.pop();
        }
        
        return ans;
    }
};