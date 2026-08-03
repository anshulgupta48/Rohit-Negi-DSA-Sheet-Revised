// ********  You are playing the Bulls and Cows game with your friend. You write down a secret number and ask your friend to guess what the number is. When your friend makes a guess, you provide a hint with the following info: The number of "bulls", which are digits in the guess that are in the correct position. The number of "cows", which are digits in the guess that are in your secret number but are located in the wrong position. Specifically, the non-bull digits in the guess that could be rearranged such that they become bulls. Given the secret number secret and your friend's guess guess, return the hint for your friend's guess. The hint should be formatted as "xAyB", where x is the number of bulls and y is the number of cows. ********
// Note --> Both secret and guess may contain duplicate digits.

// <======== Example ========>
// Input: secret = "1807", guess = "7810"
// Output: "1A3B"

// Input: secret = "1123", guess = "0111"
// Output: "1A1B"


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    string Solution::solve(string A, string B) {
        int n = A.size();
        int cowsCount = 0;
        int bullsCount = 0;
        int temp1[10] = {0};
        int temp2[10] = {0};
        
        for(int i = 0; i < n; i++) {
            if(A[i] == B[i]) {
                bullsCount++;
            } else {
                temp1[A[i]-'0']++;
                temp2[B[i]-'0']++;
            }
        }
        
        for(int i = 0; i < 10; i++) {
            cowsCount += min(temp1[i], temp2[i]);
        }
        
        string ans = to_string(bullsCount) + "A" + to_string(cowsCount) + "B";
        return ans;
    };
};