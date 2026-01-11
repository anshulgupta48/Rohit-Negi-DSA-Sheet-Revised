// ******** You are given array arr of length of ropes. A cut operation is performed on ropes such that all of them are reduced by the length of the smallest rope. Return the number of ropes left after every cut operation until the length of each rope is zero. ********

// <======== Example ========>
// Input: arr[] = [5, 1, 1, 2, 3, 5]
// Output: [4, 3, 2]

// Input: arr[] = [5, 1, 6, 9, 8, 11, 2, 2, 6, 5]
// Output: [9, 7, 5, 3, 2, 1]


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    vector<int> RopeCutting(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i < n-1; i++) {
            if(arr[i] != arr[i+1]) {
                ans.push_back(n-i-1);
            }
        }
        
        return ans;
    }
};