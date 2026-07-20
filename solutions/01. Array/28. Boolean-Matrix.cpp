// ******** Given a boolean matrix mat[], where each cell contains either 0 or 1, modify it such that if a matrix cell matrix[i][j] is 1 then all the cells in its ith row and jth column will become 1. ********

// <======== Example ========>
// Input: mat[][] = [[1, 0], [0, 0]]
// Output: [[1, 1], [1, 0]]

// Input: mat[][] = [[1, 0, 0], [1, 0, 0], [1, 0, 0], [0, 0, 0]]
// Output: [[1, 1, 1], [1, 1, 1], [1, 1, 1], [1, 0, 0]]

// Input: mat[][] = [[0, 0], [0, 0]]
// Output: [[0, 0], [0, 0]]


// Expected Time Complexity ==> O(n*m)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    void booleanMatrix(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        bool isFirstRowHasOnes = false;
        bool isFirstColHasOnes = false;
        
        for(int i = 0; i < rows; i++) {
            if(mat[i][0] == 1) {
                isFirstColHasOnes = true;
            }
        }
        
        for(int i = 0; i < cols; i++) {
            if(mat[0][i] == 1) {
                isFirstRowHasOnes = true;
            }
        }
        
        for(int i = 1; i < rows; i++) {
            for(int j = 1; j < cols; j++) {
                if(mat[i][j] == 1) {
                    mat[0][j] = 1;
                    mat[i][0] = 1;
                }
            }
        }
        
        for(int i = 1; i < rows; i++) {
            if(mat[i][0] == 1) {
                for(int j = 1; j < cols; j++) {
                    mat[i][j] = 1;
                }
            }
        }
        
        for(int i = 1; i < cols; i++) {
            if(mat[0][i] == 1) {
                for(int j = 1; j < rows; j++) {
                    mat[j][i] = 1;
                }
            }
        }
        
        if(isFirstRowHasOnes) {
            for(int i = 0; i < cols; i++) {
                mat[0][i] = 1;
            }
        }
        
        if(isFirstColHasOnes) {
            for(int i = 0; i < rows; i++) {
                mat[i][0] = 1;
            }
        }
    }
};