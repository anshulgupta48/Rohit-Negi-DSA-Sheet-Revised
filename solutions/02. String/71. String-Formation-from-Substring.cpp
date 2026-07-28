// ******** Given a string s, determine whether it can be formed by repeating one of its substrings multiple times. ********

// <======== Example ========>
// Input: s = "geeksgeeksgeeks"
// Output: true

// Input: s = "geeksforgeeks"
// Output: false


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    bool isRepeat(string &s) {
        int n = s.size();
        int i = 0;
        int j = 1;
        vector<int> temp(n, 0);
        
        while(j < n) {
            if(s[i] == s[j]) {
                temp[j] = i+1;
                i++;
                j++;
            } else {
                if(i == 0) {
                    temp[j] = 0;
                    j++;
                } else {
                    i = temp[i-1];
                }
            }
        }
        
        if(temp[n-1] == 0) {
            return false;
        }
        
        bool ans = ((n % (n-temp[n-1])) == 0);
        return ans;
    }
};