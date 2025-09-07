// ******** Given a string S consisting of the characters 0, 1 and 2. Your task is to find the length of the smallest substring of string S that contains all the three characters 0, 1 and 2. If no such substring exists, then return -1. ********

// <======== Example ========>
// Input: S = 10212
// Output: 3

// Input: S = 12121
// Output: -1


// Expected Time Complexity ==> O(length(S))
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int smallestSubstring(string S) {
        int n = S.size();
        int ans = INT_MAX;
        int start = 0;
        int end = 0;
        vector<int> temp(3);
        
        while(end < n) {
            if(S[end] == '0') {
                temp[0]++;
            }
            else if(S[end] == '1') {
                temp[1]++;
            }
            else if(S[end] == '2') {
                temp[2]++;
            }
            
            while(temp[0] >=1 && temp[1] >= 1 && temp[2] >= 1) {
                ans = min(ans, end-start+1);
                
                if(S[start] == '0') {
                    temp[0]--;
                }
                else if(S[start] == '1') {
                    temp[1]--;
                }
                else if(S[start] == '2') {
                    temp[2]--;
                }
                
                start++;
            }
            
            end++;
        }
        
        return (ans == INT_MAX) ? -1 : ans;
    }
};