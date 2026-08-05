// ******** Given a string s, return the longest palindromic substring in s. If there are multiple answers, return the one that appears first in the given string s. ********
// Note --> Substring is a contiguous sequence of characters within a string, i.e. s[ i . . . . j ] where 0 ≤ i ≤ j < len(s).

// <======== Example ========>
// Input: s = "forgeeksskeegfor"
// Output: geeksskeeg

// Input: s = "abacac"
// Output: aba

// Input: s = "geeks"
// Output: ee


// Expected Time Complexity ==> O(n2)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    string expandFromCenter(string s, int start, int end) {
        int n = s.size();
        
        while(start >= 0 && end < n && s[start] == s[end]) {
            start--;
            end++;
        }
        
        return s.substr(start+1, end-start-1);
    }
    
    string getLongestPal(string &s) {
        int n = s.size();
        string ans = "";
        
        for(int i = 0; i < n; i++) {
            string odd = expandFromCenter(s, i, i);
            string even = expandFromCenter(s, i, i+1);
            
            if(odd.size() > ans.size()) {
                ans = odd;
            }
            if(even.size() > ans.size()) {
                ans = even;
            }
        }
        
        return ans;
    }
};