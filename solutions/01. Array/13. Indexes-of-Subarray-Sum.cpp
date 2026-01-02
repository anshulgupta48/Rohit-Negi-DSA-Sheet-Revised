// ******** Given an array arr[] containing only non-negative integers, your task is to find a continuous subarray (a contiguous sequence of elements) whose sum equals a specified value target. You need to return the 1-based indices of the leftmost and rightmost elements of this subarray. You need to find the first subarray whose sum is equal to the target. ********
// Note --> If no such array is possible then, return [-1].

// <======== Example ========>
// Input: arr[] = [1, 2, 3, 7, 5], target = 12
// Output: [2, 4]

// Input: arr[] = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10], target = 15
// Output: [1, 5]

// Input: arr[] = [5, 3, 4], target = 2
// Output: [-1]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int n = arr.size();
        int sum = 0;
        int start = 0;
        int end = 0;
        
        while(end < n) {
            sum += arr[end];
            while(sum > target) {
                sum -= arr[start];
                start++;
            }
            
            if(sum == target) {
                return {start+1, end+1};
            }
            end++;
        }
        
        return {-1};
    }
};