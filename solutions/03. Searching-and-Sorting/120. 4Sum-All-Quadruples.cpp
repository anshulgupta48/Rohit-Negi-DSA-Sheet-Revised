// ******** Given an array arr[] of integers and another integer target. You have to find all unique quadruples from the given array whose sum is equal to the given target. ********
// Note --> All the quadruples should be internally sorted, i.e for any quadruple [q1, q2, q3, q4] it should be : q1 ≤ q2 ≤ q3 ≤ q4.

// <======== Example ========>
// Input: arr[] = [0, 0, 2, 1, 1], target = 3
// Output: [[0, 0, 1, 2]]

// Input: arr[] = [10, 2, 3, 4, 5, 7, 8], target = 23
// Output: [[2, 3, 8, 10], [2, 4, 7, 10], [3, 5, 7, 8]]

// Input: arr[] = [0, 0, 2, 1, 1], target = 2
// Output: [[0, 0, 1, 1]]


// Expected Time Complexity ==> O(n3)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    vector<vector<int>> fourSum(vector<int> &arr, int target) {
        int n = arr.size();
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i < n-3; i++) {
            if(i > 0 && arr[i] == arr[i-1]) {
                continue;
            }
            
            for(int j = i+1; j < n-2; j++) {
                if(j > i+1 && arr[j] == arr[j-1]) {
                    continue;
                }
                
                int k = j+1;
                int l = n-1;
                while(k < l) {
                    if(arr[i]+arr[j]+arr[k]+arr[l] == target) {
                        ans.push_back({arr[i], arr[j], arr[k], arr[l]});
                        k++;
                        l--;
                        
                        while(k < l && arr[k] == arr[k-1]) {
                            k++;
                        }
                        
                        while(k < l && arr[l] == arr[l+1]) {
                            l--;
                        }
                    }
                    else if(arr[i]+arr[j]+arr[k]+arr[l] < target) {
                        k++;
                    }
                    else {
                        l--;
                    }
                }
            }
        }
        
        return ans;
    }
};
