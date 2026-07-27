// ******** Given two strings s1 and s2. Find the minimum number of steps required to transform string s1 into string s2. The only allowed operation for the transformation is selecting a character from string s1 and inserting it in the beginning of string s1. If transformation is not possible return -1. ********

// <======== Example ========>
// Input: s1 = "abd", s2 = "bad"
// Output: 1

// Input: s1 = "GeeksForGeeks", s2 = "ForGeeksGeeks"
// Output: 3


// Expected Time Complexity ==> O(n+m)
// Expected Auxiliary Space ==> O(n+m)




class Solution{
    public:
    int transform(string &s1, string &s2) {
        int n = s1.size();
        int m = s2.size();
        int count = 0;
        map<char, int> mp;
        
        for(int i = 0; i < n; i++) {
            mp[s1[i]]++;
        }
        
        for(int i = 0; i < m; i++) {
            mp[s2[i]]--;
        }
        
        for(auto x: mp) {
            if(x.second != 0) {
                return -1;
            }
        }
        
        int i = n-1;
        int j = m-1;
        while(i >= 0 && j >= 0) {
            while(i >= 0 && s1[i] != s2[j]) {
                i--;
                count++;
            }
            
            i--;
            j--;
        }
        
        return count;
    }
};