// ******** Given a string s in Roman number format, your task is to convert it to an integer. Various symbols and their values are given below. ********
// Note --> I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000.

// <======== Example ========>
// Input: s = "IX"
// Output: 9

// Input: s = "XL"
// Output: 40

// Input: s = "MCMIV"
// Output: 1904


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int getCharValue(char ch) {
        if(ch == 'I') {
            return 1;
        }
        else if(ch == 'V') {
            return 5;
        }
        else if(ch == 'X') {
            return 10;
        }
        else if(ch == 'L') {
            return 50;
        }
        else if(ch == 'C') {
            return 100;
        }
        else if(ch == 'D') {
            return 500;
        }
        else if(ch == 'M') {
            return 1000;
        }
    }
    
    int romanToDecimal(string &s) {
        int n = s.size();
        int ans = 0;
        
        for(int i = 0; i < n; i++) {
            if(i+1 < n && getCharValue(s[i]) < getCharValue(s[i+1])) {
                ans += getCharValue(s[i+1]) - getCharValue(s[i]);
                i++;
            } else {
                ans += getCharValue(s[i]);
            }
        }
        
        return ans;
    }
};