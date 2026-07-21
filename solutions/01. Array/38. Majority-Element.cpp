// ******** Given an array arr[]. Find the majority element in the array. If no majority element exists, return -1. ********
// Note --> A majority element in an array is an element that appears strictly more than arr.size()/2 times in the array.

// <======== Example ========>
// Input: arr[] = [1, 1, 2, 1, 3, 5, 1]
// Output: 1

// Input: arr[] = [7]
// Output: 7

// Input: arr[] = [2, 13]
// Output: -1


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        int element = -1;
        
        for(int i = 0; i < n; i++) {
            if(count == 0) {
                element = arr[i];
            }
            
            if(arr[i] == element) {
                count++;
            } else {
                count--;
            }
        }
        
        count = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] == element) {
                count++;
            }
        }
        
        int ans = (count > n/2) ? element : -1;
        return ans;
    }
};