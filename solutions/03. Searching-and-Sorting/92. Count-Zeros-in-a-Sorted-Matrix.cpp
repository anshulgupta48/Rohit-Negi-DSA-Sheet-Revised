// ******** Given a N X N binary Square Matrix where each row and column of the matrix is sorted in ascending order. Find the total number of zeros present in the matrix. ********

// <======== Example ========>
// Input: N = 3, A = {{0, 0, 0}, {0, 0, 1}, {0, 1, 1}}
// Output: 6

// Input: N = 2, A = {{1, 1}, {1, 1}}
// Output: 0


// Expected Time Complexity ==> O(N)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int countZeros(vector<vector<int>> A) {
        int n = A.size();
        int m = A[0].size();
        int count = 0;
        int rowIndex = 0;
        int colIndex = m-1;
        
        while(rowIndex < n && colIndex >= 0) {
            int element = A[rowIndex][colIndex];
            
            if(element == 0) {
                rowIndex++;
                count += (colIndex + 1);
            } else {
                colIndex--;
            }
        }
        
        return count;
    }
};