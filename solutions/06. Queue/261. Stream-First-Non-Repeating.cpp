// ******** Given a string s consisting of only lowercase alphabets, for each index i in the string (0 ≤ i < n), find the first non-repeating character in the prefix s[0..i]. If no such character exists, use '#'. ********

// <======== Example ========>
// Input: s = "aabc"
// Output: a#bb

// Input: s = "bb"
// Output: "b#"


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    string firstNonRepeating(string &s) {
        int n = s.size();
        string ans = "";
        queue<char> q;
        map<char, int> mp;
        
        for(int i = 0; i < n; i++) {
            if(mp.find(s[i]) == mp.end()) {
                mp[s[i]]++;
                q.push(s[i]);
            } else {
                mp[s[i]]++;
                while(!q.empty() && mp[q.front()] > 1) {
                    q.pop();
                }
            }
            
            ans.push_back(q.empty() ? '#' : q.front());
        }
        
        return ans;
    }
};
