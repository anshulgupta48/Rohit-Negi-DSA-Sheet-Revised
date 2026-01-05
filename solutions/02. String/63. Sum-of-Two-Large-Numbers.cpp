// ******** Given two strings denoting non-negative numbers s1 and s2. Calculate the sum of s1 and s2. ********

// <======== Example ========>
// Input: s1 = "25", s2 = "23"
// Output: "48"

// Input: s1 = "2500", s2 = "23"
// Output: "2523"

// Input: s1 = "2", s2 = "3"
// Output: "5"


// Expected Time Complexity ==> O(n+m)
// Expected Auxiliary Space ==> O(n+m)




class Solution{
    public:
    string findSum(string &s1, string &s2) {
        int i = s1.size()-1;
        int j = s2.size()-1;
        string ans = "";
        int carry = 0;
        
        while(i >= 0 || j >= 0 || carry) {
            int a = (i >= 0) ? s1[i--]-'0' : 0;
            int b = (j >= 0) ? s2[j--]-'0' : 0;
            int sum = a + b + carry;
            carry = (sum / 10);
            ans.push_back((sum % 10) + '0');
        }
        
        while(ans.size() > 1 && ans.back() == '0') {
            ans.pop_back();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};