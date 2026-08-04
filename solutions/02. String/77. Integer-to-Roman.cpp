// ******** Given an integer A, convert it to a roman numeral, and return a string corresponding to its roman numeral version ********
// Note --> This question has a lot of scope of clarification from the interviewer. Please take a moment to think of all the needed clarifications and see the expected response using “See Expected Output”.

// <======== Example ========>
// Input: A = 5
// Output: "V"

// Input: A = 14
// Output: "XIV"


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    string Solution::intToRoman(int A) {
        string ans = "";
        vector<pair<int, string>> romanChars = {
            {1000, "M"},
            {900, "CM"},
            {500, "D"},
            {400, "CD"},
            {100, "C"},
            {90, "XC"},
            {50, "L"},
            {40, "XL"},
            {10, "X"},
            {9, "IX"},
            {5, "V"},
            {4, "IV"},
            {1, "I"}
        };
        
        for(auto x: romanChars) {
            while(A >= x.first) {
                ans += x.second;
                A -= x.first;
            }
        }
        
        return ans;
    };
};