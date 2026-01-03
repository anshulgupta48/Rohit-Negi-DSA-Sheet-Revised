// ******** Given an array arr[] of size n where every element is in the range from 0 to n-1. Rearrange the given array so that the transformed array arrT[i] becomes arr[arr[i]]. ********
// Note --> arr and arrT are both same variables, representing the array before and after transformation respectively.

// <======== Example ========>
// Input: arr[] = [1,0]
// Output: [0, 1]

// Input: arr[] = [4,0,2,1,3]
// Output: [3, 4, 2, 0, 1]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    void arrange(vector<long long>& arr) {
        int n = arr.size();
        
        for(int i = 0; i < n; i++) {
            arr[i] += ((arr[arr[i]] % n) * n);
        }
        
        for(int i = 0; i < n; i++) {
            arr[i] = arr[i] / n;
        }
    }
};