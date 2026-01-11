// ******** Given a string consisting of lowercase letters, arrange all its letters in ascending order. ********

// <======== Example ========>
// Input: S = "edcab"
// Output: "abcde"

// Input: S = "xzy"
// Output: "xyz"


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    string sort(string s) {
        sort(s.begin(), s.end());
        return s;
    }
};