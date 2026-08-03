// ******** Given a string s of length n containing only lowercase alphabets. You are also given a permutation p of length n containing integers from 0 to n-1. In (i+1)'th day you can take the p[i] value of the permutation array and replace s[p[i]] with a '?'. You have to tell the minimum number of days required, such that after it for all index i (0 ≤ i < n-1), if s[i]!='?', then s[i]!=s[i+1]. ********

// <======== Example ========>
// Input: N = 4, S = "aabb", P[] = {2, 1, 3, 0}
// Output: 2

// Input: N = 4, S = "abca", P[] = {3, 0, 2, 1}
// Output: 0


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int getMinimumDays(int N, string S, vector<int> &P) {
        int count = 0;
        int i = 0;
        
        for(int i = 0; i < N-1; i++) {
            if(S[i] == S[i+1]) {
                count++;
            }
        }
        
        while(count) {
            int index = P[i];
            
            if(S[index] != '?') {
                if(index != 0 && S[index] == S[index-1]) {
                    count--;
                }
                if(index != N-1 && S[index] == S[index+1]) {
                    count--;
                }
                S[index] = '?';
            }
            i++;
        }
        
        return i;
    }
};