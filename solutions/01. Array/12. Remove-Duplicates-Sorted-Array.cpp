// ******** You are given a sorted array arr[] containing positive integers. Your task is to remove all duplicate elements from this array such that each element appears only once. Return an array containing these distinct elements in the same order as they appeared. ********

// <======== Example ========>
// Input: arr[] = [2, 2, 2, 2, 2]
// Output: [2]

// Input: arr[] = [1, 2, 4]
// Output: [1, 2, 4]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    vector<int> removeDuplicates(vector<int> &arr) {
        int n = arr.size();
        int start = 0;
        int end = 0;
        
        while(end < n-1) {
            if(arr[end] != arr[end+1]) {
                arr[start++] = arr[end];
            }
            end++;
        }
        
        arr[start++] = arr[n-1];
        return vector<int>(arr.begin(), arr.begin()+start);
    }
};