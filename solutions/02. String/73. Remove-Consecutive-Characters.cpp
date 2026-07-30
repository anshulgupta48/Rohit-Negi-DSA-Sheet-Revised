// ******** Given a string A and integer B, remove all consecutive same characters that have length exactly B. ********
// Note --> All the consecutive same characters that have length exactly B will be removed simultaneously.

// <======== Example ========>
// Input: A = "aabcd", B = 2
// Output: "bcd"

// Input: A = "aabbccd", B = 2
// Output: "d"


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    string Solution::solve(string A, int B) {
        int n = A.size();
        string ans = "";
        int i = 0;
        
        while(i < n) {
            int j = i;
            while(j < n && A[i] == A[j]) {
                j++;
            }
            
            int diff = (j - i);
            if(diff != B) {
                ans.append(diff, A[i]);
            }
            i = j;
        }
        
        return ans;
    };
};