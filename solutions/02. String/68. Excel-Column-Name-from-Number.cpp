// ******** Given a positive integer n, return its corresponding Excel column title. In Excel, column titles follow this pattern: A, B, C, ..., Z, AA, AB, ..., AZ, BA, ..., ZZ, AAA, AAB, ... This is similar to a base-26 numbering system, but instead of digits 0–25, the letters A–Z represent values 1–26. ********

// <======== Example ========>
// Input: n = 28
// Output: AB

// Input: n = 13
// Output: M

// Input: n = 5473578
// Output: KYJZF


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    string colName(int n) {
        string ans = "";
        
        while(n > 0) {
            n--;
            ans.push_back(n%26 + 'A');
            n = n / 26;
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};