// ******** Given a binary string s. You have to count the number of substrings that start and end with 1. ********

// <======== Example ========>
// Input: s = "1111"
// Output: 6

// Input: s = "01101"
// Output: 3


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int binarySubstring(string& s) {
        int n = s.size();
        int onesCount = 0;
        
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                onesCount++;
            }
        }
        
        int ans = onesCount*(onesCount-1)/2;
        return ans;
    }
};