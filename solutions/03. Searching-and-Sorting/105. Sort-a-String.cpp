// ******** Given a string consisting of lowercase letters, arrange all its letters in ascending order. ********

// <======== Example ========>
// Input: s = "edcab"
// Output: "abcde"

// Input: s = "xzy"
// Output: "xyz"


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    string sortString(string &s) {
        int n = s.size();
        string ans = "";
        map<char, int> mp;
        
        for(int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        
        for(auto x: mp) {
            while(mp[x.first] > 0) {
                ans += x.first;
                mp[x.first]--;
            }
        }
        
        return ans;
    }
};