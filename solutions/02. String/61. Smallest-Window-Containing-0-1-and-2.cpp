// ******** Given a string s consisting only of the characters '0', '1' and '2', determine the length of the smallest substring that contains all three characters at least once. If no such substring exists, return -1. ********

// <======== Example ========>
// Input: s = "10212"
// Output: 3

// Input: s = "12121"
// Output: -1


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int smallestSubstring(string &s) {
        int n = s.size();
        int count = INT_MAX;
        int start = 0;
        int end = 0;
        vector<int> temp(3, 0);
        
        while(end < n) {
            temp[s[end]-'0']++;
            
            while(temp[0] >= 1 && temp[1] >= 1 && temp[2] >= 1) {
                temp[s[start]-'0']--;
                count = min(count, end-start+1);
                start++;
            }
            end++;
        }
        
        int ans = (count == INT_MAX) ? -1 : count;
        return ans;
    }
};