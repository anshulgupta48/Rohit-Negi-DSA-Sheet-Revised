// ******** You are given a string s. Your task is to determine if the string is a palindrome. A string is considered a palindrome if it reads the same forwards and backwards. ********

// <======== Example ========>
// Input: s = "abba"
// Output: true

// Input: s = "abc"
// Output: false


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    bool isPalindrome(string& s) {
        int n = s.size();
        int start = 0;
        int end = n-1;
        
        while(start < end) {
            if(s[start] != s[end]) {
                return false;
            }
            
            start++;
            end--;
        }
        
        return true;
    }
};