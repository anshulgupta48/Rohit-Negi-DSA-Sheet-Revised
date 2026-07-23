// ******** Given two strings s1 and s2, merge them alternatively i.e. the first character of s1 then the first character of s2 and so on till the strings end. ********
// Note --> Add the whole string if other string is empty.

// <======== Example ========>
// Input: s1 = "Hello", s2 = "Bye"
// Output: HBeylelo

// Input: s1 = "abc", s2 = "def"
// Output: adbecf


// Expected Time Complexity ==> O(n+m)
// Expected Auxiliary Space ==> O(n+m)




class Solution{
    public:
    string merge(string &s1, string &s2) {
        int i = 0;
        int j = 0;
        string ans = "";
        
        while(i < s1.size() && j < s2.size()) {
            ans += s1[i++];
            ans += s2[j++];
        }
        
        while(i < s1.size()) {
            ans += s1[i++];
        }
        
        while(j < s2.size()) {
            ans += s2[j++];
        }
        
        return ans;
    }
};