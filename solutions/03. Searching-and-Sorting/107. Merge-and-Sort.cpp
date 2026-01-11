// ******** Given two arrays arr1[] and arr2[], return the merged array in ascending order containing unique elements. ********

// <======== Example ========>
// Input: arr1[] = [11, 1, 8], arr2[] = [10, 11]
// Output: [1, 8, 10, 11]

// Input: arr1[] = [7, 1, 5, 3, 9], arr2[] = [8, 4, 3, 5, 2, 6]
// Output: [1, 2, 3, 4, 5, 6, 7, 8, 9]


// Expected Time Complexity ==> O(n*logn + m*logm)
// Expected Auxiliary Space ==> O(n+m)




class Solution{
    public:
    vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        int m = arr2.size();
        vector<int> ans;
        
        int i = 0;
        int j = 0;
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        
        while(i < n && j < m) {
            if(arr1[i] < arr2[j]) {
                if(ans.size() == 0 || ans.back() != arr1[i]) {
                    ans.push_back(arr1[i]);
                }
                i++;
            } else {
                if(ans.size() == 0 || ans.back() != arr2[j]) {
                    ans.push_back(arr2[j]);
                }
                j++;
            }
        }
        
        while(i < n) {
            if(ans.size() == 0 || ans.back() != arr1[i]) {
                ans.push_back(arr1[i]);
            }
            i++;
        }
        
        while(j < m) {
            if(ans.size() == 0 || ans.back() != arr2[j]) {
                ans.push_back(arr2[j]);
            }
            j++;
        }
        
        return ans;
    }
};