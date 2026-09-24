// ******** Given a string s, the task is to find the bracket numbers, i.e., for each bracket in s, return i if the bracket is the ith opening or closing bracket to appear in the string. ********
// Note --> s contains lowercase English alphabets, and '(', ')' characters at any index, the number of opening brackets is greater than or equal to closing brackets.

// <======== Example ========>
// Input: s = "(aa(bdc))p(dee)"
// Output: 1 2 2 1 3 3

// Input: s = "(((()("
// Output: 1 2 3 4 4 5


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    vector<int> bracketNumbers(string &s) {
        int n = s.size();
        int count = 0;
        stack<int> st;
        vector<int> ans;
        
        for(int i = 0; i < n; i++) {
            if(s[i] == '(') {
                count++;
                st.push(count);
                ans.push_back(count);
            }
            else if(s[i] == ')') {
                ans.push_back(st.top());
                st.pop();
            }
        }
        
        return ans;
    }
};
