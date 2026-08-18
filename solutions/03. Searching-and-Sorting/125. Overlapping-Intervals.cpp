// ******** Given an array of intervals arr[][] of size n, where arr[i] = [starti, endi] represents the start and end points of the ith interval, merge all overlapping intervals and return the resulting array of non-overlapping intervals. ********
// Note --> Two intervals [a, b] and [c, d] such that a ≤ c, are considered overlapping if  c ≤ b.

// <======== Example ========>
// Input: arr[][] = [[1, 3], [2, 4], [6, 8], [9, 10]]
// Output: [[1, 4], [6, 8], [9, 10]]

// Input: arr[][] = [[6, 8], [1, 9], [2, 4], [4, 7]]
// Output: [[1, 9]]


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        int n = arr.size();
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        int start = -1;
        int end = -1;
        
        for(int i = 0; i < n; i++) {
            if(start == -1 && end == -1) {
                start = arr[i][0];
                end = arr[i][1];
            }
            else if(end < arr[i][0]) {
                ans.push_back({start, end});
                start = arr[i][0];
                end = arr[i][1];
            }
            else if(end >= arr[i][0]) {
                end = max(end, arr[i][1]);
            }
        }
        
        ans.push_back({start, end});
        return ans;
    }
};
