// ******** Given an array of positive integers. Your task is to rearrange the array elements alternatively i.e. first element should be the max value, the second should be the min value, the third should be the second max, the fourth should be the second min, and so on. ********
// Note --> Modify the original array itself. Do it without using any extra space. You do not have to return anything.

// <======== Example ========>
// Input: arr[] = [1, 2, 3, 4, 5, 6]
// Output: [6, 1, 5, 2, 4, 3]

// Input: arr[]= [10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110]
// Output: [110, 10, 100, 20, 90, 30, 80, 40, 70, 50, 60]

// Input: arr[]= [1]
// Output: [1]


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    void rearrange(vector<int>& arr) {
        int n = arr.size();
        int start = 0;
        int end = n-1;
        sort(arr.begin(), arr.end());
        int maxElement = arr[end]+1;
        
        for(int i = 0; i < n; i++) {
            if(i%2 == 0) {
                arr[i] += (arr[end] % maxElement) * maxElement;
                end--;
            } else {
                arr[i] += (arr[start] % maxElement) * maxElement;
                start++;
            }
        }
        
        for(int i = 0; i < n; i++) {
            arr[i] = arr[i] / maxElement;
        }
    }
};