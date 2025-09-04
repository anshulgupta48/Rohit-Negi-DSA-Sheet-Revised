// ******** You are given two strings s1 and s2, of equal lengths. The task is to check if s2 is a rotated version of the string s1. ********
// Note --> A string is a rotation of another if it can be formed by moving characters from the start to the end (or vice versa) without rearranging them.

// <======== Example ========>
// Input: s1 = "abcd", s2 = "cdab"
// Output: true

// Input: s1 = "aab", s2 = "aba"
// Output: true

// Input: s1 = "abcd", s2 = "acbd"
// Output: false


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    bool areRotations(string &s1, string &s2) {
        s1 = s1 + s1;
        if(s1.find(s2) != -1) {
            return true;
        }
        
        return false;
    }
};