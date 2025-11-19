// ******** Given a string consisting of lowercase letters, arrange all its letters in ascending order. ********

// <======== Example ========>
// Input: S = "edcab"
// Output: "abcde"

// Input: S = "xzy"
// Output: "xyz"


// Expected Time Complexity ==> O(n2)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    string sort(string s) {
        int n = s.size();
        string ans = "";
        map<char, int> mp;
        
        for(int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        
        for(auto x: mp) {
            for(int i = 0; i < x.second; i++) {
                ans += x.first;
            }
        }
        
        return ans;
    }
};