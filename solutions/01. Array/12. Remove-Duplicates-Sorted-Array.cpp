// ******** You are given a sorted array arr[] containing positive integers. Your task is to remove all duplicate elements from this array such that each element appears only once. Return an array containing these distinct elements in the same order as they appeared. ********

// <======== Example ========>
// Input: arr[] = [2, 2, 2, 2, 2]
// Output: [2]

// Input: arr[] = [1, 2, 4]
// Output: [1, 2, 4]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    vector<int> removeDuplicates(vector<int> &arr) {
        int n = arr.size();
        vector<int> ans;
        
        for(int i = 0; i < n-1; i++) {
            if(arr[i] != arr[i+1]) {
                ans.push_back(arr[i]);
            }
        }
        
        ans.push_back(arr[n-1]);
        return ans;
    }
};