// ******** Given a string s, find the length of the longest substring without repeating characters. ********

// <======== Example ========>
// Input: s = "geeksforgeeks"
// Output: 7

// Input: s = "abdefgabef"
// Output: 6

// Input: s = "aaaaa"
// Output: 1


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    int longestUniqueSubstring(string &s) {
        int n = s.size();
        int ans = 0;
        int i = 0;
        map<char, int> mp;
        
        while(i < n) {
            if(mp.count(s[i]) == 0) {
                mp.insert({s[i], i});
                i++;
            } else {
                int temp = mp.size();
                ans = max(ans, temp);
                i = mp[s[i]] + 1;
                mp.clear();
            }
        }
        
        if(ans < mp.size()) {
            ans = mp.size();
        }
        
        return ans;
    }
};