// ******** Given an unsorted array arr of positive integers. One number a from the set [1, 2,....,n] is missing and one number b occurs twice in the array. Find numbers a and b. ********
// Note --> The test cases are generated such that there always exists one missing and one repeating number within the range [1,n].

// <======== Example ========>
// Input: arr[] = [2, 2]
// Output: [2, 1]

// Input: arr[] = [1, 3, 3] 
// Output: [3, 2]

// Input: arr[] = [4, 3, 6, 2, 1, 1]
// Output: [1, 5]




class Solution{
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(2);
        
        for(int i = 0; i < n; i++) {
            if(arr[abs(arr[i])-1] > 0) {
                arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
            }
            else {
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