// ******** Given a number n, generate all binary numbers with decimal values from 1 to n. ********

// <======== Example ========>
// Input: n = 4
// Output: ["1", "10", "11", "100"]

// Input: n = 6
// Output: ["1", "10", "11", "100", "101", "110"]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    vector<string> generateBinary(int n) {
        vector<string> ans;
        queue<string> q;
        q.push("1");
        
        for(int i = 0; i < n; i++) {
            string temp = q.front();
            ans.push_back(temp);
            q.pop();
            q.push(temp+"0");
            q.push(temp+"1");
        }
        
        return ans;
    }
};
