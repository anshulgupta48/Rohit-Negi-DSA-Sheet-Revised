// ******** Given a 2D integer matrix mat[][] of size n x m, where every row and column is sorted in increasing order and a number x, the task is to find whether element x is present in the matrix. ********

// <======== Example ========>
// Input: mat[][] = [[3, 30, 38],[20, 52, 54],[35, 60, 69]], x = 62
// Output: false

// Input: mat[][] = [[18, 21, 27],[38, 55, 67]], x = 55
// Output: true

// Input: mat[][] = [[1, 2, 3],[4, 5, 6],[7, 8, 9]], x = 3
// Output: true


// Expected Time Complexity ==> O(n+m)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        int n = mat.size();
        int m = mat[0].size();
        int rowIndex = 0;
        int colIndex = m-1;
        
        while(rowIndex < n && colIndex >= 0) {
            int element = mat[rowIndex][colIndex];
            
            if(element == x) {
                return true;
            }
            else if(element < x) {
                rowIndex++;
            }
            else {
                colIndex--;
            }
        }
        
        return false;
    }
};