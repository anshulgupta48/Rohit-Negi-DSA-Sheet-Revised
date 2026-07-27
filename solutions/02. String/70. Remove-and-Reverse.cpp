// ******** Given a string S which consists of only lowercase English alphabets, you have to perform the below operations: If the string S contains any repeating character, remove the first repeating character and reverse the string and again perform the above operation on the modified string, otherwise, you stop. You have to find the final string. ********

// <======== Example ========>
// Input: S = "abab"
// Output: ba

// Input: S = "dddd"
// Output: d


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    string removeReverse(string S) {
        int n = S.size();
        string ans = "";
        int direction = 0;
        int start = 0;
        int end = n-1;
        map<char, int> mp;
        
        for(int i = 0; i < n; i++) {
            mp[S[i]]++;
        }
        
        for(int i = 0; i < n; i++) {
            if(direction == 0) {
                if(mp[S[start]] == 1) {
                    start++;
                } else {
                    mp[S[start]]--;
                    direction = 1;
                    S[start] = '#';
                    start++;
                }
            } else {
                if(mp[S[end]] == 1) {
                    end--;
                } else {
                    mp[S[end]]--;
                    direction = 0;
                    S[end] = '#';
                    end--;
                }
            }
        }
        
        for(int i = 0; i < n; i++) {
            if(S[i] != '#') {
                ans += S[i];
            }
        }
        
        if(direction == 1) {
            reverse(ans.begin(), ans.end());
        }
        
        return ans;
    }
};