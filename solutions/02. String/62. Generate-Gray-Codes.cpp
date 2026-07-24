// ******** Given a number n, generate n bit Gray codes. A Gray code sequence starts with a string of n zeros, and every consecutive Gray code in the sequence differs from the previous one by exactly one bit. ********

// <======== Example ========>
// Input: n = 2
// Output: ["00", "01", "11", "10"]

// Input: n = 3
// Output: ["000", "001", "011", "010", "110", "111", "101", "100"]


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(n*logn)




class Solution{
    public:
    vector<string> generateGrayCodes(int n) {
        vector<string> ans;
        if(n == 1) {
            ans.push_back("0");
            ans.push_back("1");
            return ans;
        }
        
        vector<string> temp = generateGrayCodes(n-1);
        for(int i = 0; i < temp.size(); i++) {
            ans.push_back("0" + temp[i]);
        }
        
        for(int i = temp.size()-1; i >= 0; i--) {
            ans.push_back("1" + temp[i]);
        }
        
        return ans;
    }
};