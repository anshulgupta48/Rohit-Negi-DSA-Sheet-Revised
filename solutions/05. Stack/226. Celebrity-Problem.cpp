// ******** Consider a party being organized by some people. A celebrity is a person who is known to all but does not know anyone at the party. A square matrix mat[][] of size n * n is used to represent people at the party such that if an element of row i and column j is set to 1 it means ith person knows jth person. You need to return index of the celebrity in the party. If the celebrity does not exist, return -1. ********
// Note --> Follow 0-based indexing.

// <======== Example ========>
// Input: mat[][] = [[1, 1, 0],[0, 1, 0],[0, 1, 1]]
// Output: 1

// Input: mat[][] = [[1, 1],[1, 1]]
// Output: -1


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        int n = mat.size();
        int start = 0;
        int end = n-1;
        
        while(start < end) {
            if(mat[start][end] == 1) {
                start++;
            } else {
                end--;
            }
        }
        
        for(int i = n-1; i >= 0; i--) {
            if(i == start) {
                continue;
            }
            else if(!mat[i][start] || mat[start][i]) {
                return -1;
            }
        }
        
        return start;
    }
};
