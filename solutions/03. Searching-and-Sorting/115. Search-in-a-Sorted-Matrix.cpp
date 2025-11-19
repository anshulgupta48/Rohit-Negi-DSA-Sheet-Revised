// ******** Given a strictly sorted 2D matrix mat[][] of size n x m and a number x. Find whether the number x is present in the matrix or not. ********
// Note --> In a strictly sorted matrix, each row is sorted in strictly increasing order, and the first element of the ith row (i!=0) is greater than the last element of the (i-1)th row.

// <======== Example ========>
// Input: mat[][] = [[1, 5, 9], [14, 20, 21], [30, 34, 43]], x = 14
// Output: true

// Input: mat[][] = [[1, 5, 9, 11], [14, 20, 21, 26], [30, 34, 43, 50]], x = 42
// Output: false

// Input: mat[][] = [[87, 96, 99], [101, 103, 111]], x = 101
// Output: true


// Expected Time Complexity ==> O(n+m)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
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