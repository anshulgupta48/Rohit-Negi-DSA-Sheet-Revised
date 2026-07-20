// ******** Given an n × n grid mat[][] of integers where values can be negative, find the maximum sum among all possible k × k subgrids. ********

// <======== Example ========>
// Input: k = 3, mat[][] = [[1,2,-1,4],[-8,-3,4,2],[3,8,10,-8],[-4,-1,1,7]]
// Output: 20

// Input: k = 1, mat[][] = [[4]]
// Output: 4


// Expected Time Complexity ==> O(n2)
// Expected Auxiliary Space ==> O(n2)




class Solution{
    public:
    int maximumSum(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int maxSum = INT_MIN;
        int temp[n+1][n+1] = {0};
        
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                temp[i][j] = mat[i-1][j-1] + temp[i-1][j] + temp[i][j-1] - temp[i-1][j-1];
                
                if(i >= k && j >= k) {
                    int sum = temp[i][j] + temp[i-k][j-k] - temp[i-k][j] - temp[i][j-k];
                    maxSum = max(maxSum, sum);
                }
            }
        }
        
        return maxSum;
    }
};