// ******** Given a string S consisting of the characters 0, 1 and 2. Your task is to find the length of the smallest substring of string S that contains all the three characters 0, 1 and 2. If no such substring exists, then return -1. ********

// <======== Example ========>
// Input: S = 10212
// Output: 3

// Input: S = 12121
// Output: -1


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int smallestSubstring(string S) {
        int n = S.size();
        int count = INT_MAX;
        int start = 0;
        int end = 0;
        vector<int> temp(3, 0);
        
        while(end < n) {
            temp[S[end]-'0']++;
            
            while(temp[0] >= 1 && temp[1] >= 1 && temp[2] >= 1) {
                count = min(count, end-start+1);
                temp[S[start]-'0']--;
                start++;
            }
            end++;
        }
        
        int ans = (count == INT_MAX) ? -1 : count;
        return ans;
    }
};