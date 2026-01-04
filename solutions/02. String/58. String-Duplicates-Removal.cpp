// ******** Given a string s which may contain lowercase and uppercase characters. The task is to remove all duplicate characters from the string and find the resultant string. The order of remaining characters in the output should be same as in the original string. ********

// <======== Example ========>
// Input: s = "geEksforGEeks"
// Output: "geEksforG"

// Input: s = "HaPpyNewYear"
// Output: "HaPpyNewYr"


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    string removeDuplicates(string &s) {
        int n = s.size();
        string ans = "";
        map<char, int> mp;
        
        for(int i = 0; i < n; i++) {
            if(mp.count(s[i]) == 0) {
                ans += s[i];
                mp[s[i]]++;
            }
        }
        
        return ans;
    }
};