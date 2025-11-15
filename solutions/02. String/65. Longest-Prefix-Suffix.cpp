// ******** Given a string s, of lowercase english alphabets, find the length of the longest proper prefix which is also a suffix. ********
// Note --> Prefix and suffix can be overlapping but they should not be equal to the entire string.

// <======== Example ========>
// Input: s = "abab"
// Output: 2

// Input: s = "aabcdaabc"
// Output: 4

// Input: s = "aaaa"
// Output: 3


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int getLPSLength(string &s) {
        int n = s.size();
        int i = 0;
        int j = 1;
        int pos = 1;
        
        while(j < n) {
            if(s[i] == s[j]) {
                i++;
                j++;
            } else {
                pos++;
                i = 0;
                j = pos;
            }
        }
        
        return i;
    }
};