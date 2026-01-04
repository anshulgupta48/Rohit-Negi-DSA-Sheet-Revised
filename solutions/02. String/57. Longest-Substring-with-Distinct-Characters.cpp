// ******** You are given a string s. You have to find the length of the longest substring with all distinct characters. ********

// <======== Example ========>
// Input: s = "geeksforgeeks"
// Output: 7

// Input: s = "aaa"
// Output: 1

// Input: s = "abcdefabcbb"
// Output: 6


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    int longestUniqueSubstr(string &s) {
        int n = s.size();
        int ans = 0;
        int i = 0;
        map<char, int> mp;
        
        while(i < n) {
            if(mp.count(s[i])) {
                int temp = mp.size();
                ans = max(ans, temp);
                i = mp[s[i]] + 1;
                mp.clear();
            } else {
                mp.insert({s[i], i});
                i++;
            }
        }
        
        if(ans < mp.size()) {
            ans = mp.size();
        }
        
        return ans;
    }
};