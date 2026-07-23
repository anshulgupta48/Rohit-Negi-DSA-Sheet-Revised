// ******** You are given a string s, and your task is to reverse the string. ********

// <======== Example ========>
// Input: s = "Geeks"
// Output: "skeeG"

// Input: s = "for"
// Output: "rof"

// Input: s = "a"
// Output: "a"


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    string reverseString(string& s) {
        int n = s.size();
        int start = 0;
        int end = n-1;
        
        while(start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
        
        return s;
    }
};