// ******** Given a boolean matrix mat[], where each cell contains either 0 or 1, modify it such that if a matrix cell matrix[i][j] is 1 then all the cells in its ith row and jth column will become 1. ********

// <======== Example ========>
// Input: mat[][] = [[1, 0], [0, 0]]
// Output: [[1, 1], [1, 0]]

// Input: mat[][] = [[1, 0, 0], [1, 0, 0], [1, 0, 0], [0, 0, 0]]
// Output: [[1, 1, 1], [1, 1, 1], [1, 1, 1], [1, 0, 0]]

// Input: mat[][] = [[0, 0], [0, 0]]
// Output: [[0, 0], [0, 0]]


// Expected Time Complexity ==> O(n*m)
// Expected Auxiliary Space ==> O(n+m)




class Solution{
    public:
    void booleanMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int> rows(n, 0);
        vector<int> cols(m, 0);
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(mat[i][j] == 1) {
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(rows[i] == 1 || cols[j] == 1) {
                    mat[i][j] = 1;
                }
            }
        }
    }
};