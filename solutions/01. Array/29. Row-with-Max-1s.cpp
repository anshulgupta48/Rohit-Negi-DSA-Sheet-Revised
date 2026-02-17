// ******** You are given a 2D binary array arr[][] consisting of only 1s and 0s. Each row of the array is sorted in non-decreasing order. Your task is to find and return the index of the first row that contains the maximum number of 1s. If no such row exists, return -1. ********
// Note --> The array follows 0-based indexing. The number of rows and columns in the array are denoted by n and m respectively.

// <======== Example ========>
// Input: arr[][] = [[0,1,1,1], [0,0,1,1], [1,1,1,1], [0,0,0,0]]
// Output: 2

// Input: arr[][] = [[0,0], [1,1]]
// Output: 1

// Input: arr[][] = [[0,0], [0,0]]
// Output: -1


// Expected Time Complexity ==> O(n*m)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int n = arr.size();
        int m = arr[0].size();
        int maxRow = -1;
        int maxOnes = 0;
        
        for(int i = 0; i < n; i++) {
            int onesCount = 0;
            
            for(int j = 0; j < m; j++) {
                if(arr[i][j] == 1) {
                    onesCount++;
                }
            }
            
            if(onesCount > maxOnes) {
                maxRow = i;
                maxOnes = onesCount;
            }
        }
        
        return maxRow;
    }
};