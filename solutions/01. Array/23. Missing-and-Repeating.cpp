// ******** Given an unsorted array arr[] of size n, containing elements from the range 1 to n, it is known that one number in this range is missing, and another number occurs twice in the array, find both the duplicate number and the missing number. ********

// <======== Example ========>
// Input: arr[] = [2, 2]
// Output: [2, 1]

// Input: arr[] = [1, 3, 3] 
// Output: [3, 2]

// Input: arr[] = [4, 3, 6, 2, 1, 1]
// Output: [1, 5]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(2);
        
        for(int i = 0; i < n; i++) {
            if(arr[abs(arr[i])-1] > 0) {
                arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
            } else {
                ans[0] = abs(arr[i]);
            }
        }
        
        for(int i = 0; i < n; i++) {
            if(arr[i] > 0) {
                ans[1] = i+1;
            }
        }
        
        return ans;
    }
};