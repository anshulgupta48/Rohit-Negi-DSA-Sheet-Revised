// ******** Given a string s of lowercase alphabets. The task is to find the maximum occurring character in the string s. If more than one character occurs the maximum number of times then print the lexicographically smaller character. ********

// <======== Example ========>
// Input: s = "testsample"
// Output: 'e'

// Input: s = "output"
// Output: 't'


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    char getMaxOccuringChar(string& s) {
        int n = s.size();
        char maxChar;
        int maxFreq = 0;
        map<char, int> mp;
        
        for(int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        
        for(auto x: mp) {
            if(x.second > maxFreq) {
                maxChar = x.first;
                maxFreq = x.second;
            }
        }
        
        return maxChar;
    }
};