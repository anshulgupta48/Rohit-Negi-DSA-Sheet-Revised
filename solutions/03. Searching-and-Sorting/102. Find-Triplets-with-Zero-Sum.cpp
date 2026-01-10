// ******** Given an array arr[] of integers, determine whether it contains a triplet whose sum equals zero. Return true if such a triplet exists, otherwise, return false. ********

// <======== Example ========>
// Input: arr[] = [0, -1, 2, -3, 1]
// Output: true

// Input: arr[] = [1, 2, 3]
// Output: false

// Input: arr[] = [-5, 3, 2, -1, 0, 1]
// Output: true


// Expected Time Complexity ==> O(n2)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    bool findTriplets(vector<int> &arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i < n-2; i++) {
            int j = i+1;
            int k = n-1;
            
            while(j < k) {
                if((arr[i]+arr[j]+arr[k]) == 0) {
                    return true;
                }
                else if((arr[i]+arr[j]+arr[k]) < 0) {
                    j++;
                }
                else {
                    k--;
                }
            }
        }
        
        return false;
    }
};