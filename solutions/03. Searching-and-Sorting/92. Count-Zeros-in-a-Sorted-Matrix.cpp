// ******** Given a n * n binary Square Matrix where each row and column of the matrix is sorted in ascending order. Find the total number of zeros present in the matrix. ********

// <======== Example ========>
// Input: mat[][] = [[0,0,0], [0,0,1], [0,1,1]]
// Output: 6

// Input: mat[][] = [[1,1], [1,1]]
// Output: 0


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int countZeros(vector<vector<int>>& mat) {
        int n = mat.size();
        int count = 0;
        int rowIndex = 0;
        int colIndex = n-1;
        
        while(rowIndex < n && colIndex >= 0) {
            int element = mat[rowIndex][colIndex];
            
            if(element == 0) {
                count += (colIndex + 1);
                rowIndex++;
            } else {
                colIndex--;
            }
        }
        
        return count;
    }
};