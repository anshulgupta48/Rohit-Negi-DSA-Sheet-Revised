// ******** Given two strings s1 and s2 consisting of lowercase english alphabets, check whether these strings are meta strings or not. ********
// Note --> Meta strings are the strings which can be made equal by exactly one swap in any of the strings. Equal string are not considered here as Meta strings.

// <======== Example ========>
// Input: s1 = "geeks", s2 = "keegs"
// Output: true

// Input: s1 = "geeks", s2 = "geeks"
// Output: false

// Input: s1 = "a", s2 = "b"
// Output: false


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    bool metaStrings(string &s1, string &s2) {
        if(s1.size() != s2.size() || s1 == s2) {
            return false;
        }
        
        int n = s1.size();
        int i = 0;
        int j = n-1;
        
        while(s1[i] == s2[i]) {
            i++;
        }
        
        while(s1[j] == s2[j]) {
            j--;
        }
        
        swap(s1[i], s1[j]);
        return (s1 == s2);
    }
};