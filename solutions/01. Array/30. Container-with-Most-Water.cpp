// ******** Given an array arr[] of non-negative integers, where each element arr[i] represents the height of the vertical lines, find the maximum amount of water that can be contained between any two lines, together with the x-axis. ********
// Note --> In the case of a single vertical line it will not be able to hold water.

// <======== Example ========>
// Input: arr[] = [1, 5, 4, 3]
// Output: 6

// Input: arr[] = [3, 1, 2, 4, 5]
// Output: 12

// Input: arr[] = [2, 1, 8, 6, 4, 6, 5, 5]
// Output: 25


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int maxWater(vector<int> &arr) {
        int n = arr.size();
        int maxArea = 0;
        int start = 0;
        int end = n-1;
        
        while(start < end) {
            if(arr[start] < arr[end]) {
                int area = (end - start) * arr[start];
                maxArea = max(maxArea, area);
                start++;
            } else {
                int area = (end - start) * arr[end];
                maxArea = max(maxArea, area);
                end--;
            }
        }
        
        return maxArea;
    }
};