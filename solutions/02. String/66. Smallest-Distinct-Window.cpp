// ******** Given a string str, your task is to find the length of the smallest window that contains all the characters of the given string at least once. ********

// <======== Example ========>
// Input: str = "aabcbcdbca"
// Output: 4

// Input: str = "aaab"
// Output: 2

// Input: str = "geeksforgeeks"
// Output: 7


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int findSubString(string& str) {
        int n = str.size();
        int ans = INT_MAX;
        set<char> st;
        map<char, int> mp;
        int i = 0;
        int j = 0;
        
        for(int i = 0; i < n; i++) {
            st.insert(str[i]);
        }
        
        while(j < n) {
            mp[str[j]]++;
            
            while(mp.size() == st.size()) {
                ans = min(ans, j-i+1);
                mp[str[i]]--;
                
                if(mp[str[i]] == 0) {
                    mp.erase(str[i]);
                }
                i++;
            }
            
            j++;
        }
        
        return ans;
    }
};