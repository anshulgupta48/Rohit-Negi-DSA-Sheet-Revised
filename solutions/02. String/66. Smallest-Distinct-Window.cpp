// ******** Given a string str, your task is to find the length of the smallest window that contains all the characters of the given string at least once. ********

// <======== Example ========>
// Input: str = "aabcbcdbca"
// Output: 4

// Input: str = "aaab"
// Output: 2

// Input: str = "geeksforgeeks"
// Output: 7


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    int findSubString(string& str) {
        int n = str.size();
        int count = INT_MAX;
        int start = 0;
        int end = 0;
        set<char> st;
        map<char, int> mp;
        
        for(int i = 0; i < n; i++) {
            st.insert(str[i]);
        }
        
        while(end < n) {
            mp[str[end]]++;
            
            while(st.size() == mp.size()) {
                count = min(count, end-start+1);
                mp[str[start]]--;
                
                if(mp[str[start]] == 0) {
                    mp.erase(str[start]);
                }
                start++;
            }
            
            end++;
        }
        
        return count;
    }
};