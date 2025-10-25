// ******** Given an array arr[] of distinct integers of size n and a value sum, the task is to find the count of triplets (i, j, k), having (i<j<k) with the sum of (arr[i] + arr[j] + arr[k]) smaller than the given value sum. ********

// <======== Example ========>
// Input: n = 4, sum = 2, arr[] = {-2, 0, 1, 3}
// Output: 2

// Input: n = 5, sum = 12, arr[] = {5, 1, 3, 4, 7}
// Output: 4


// Expected Time Complexity ==> O(n2)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    long long countTriplets(int n, long long sum, long long arr[]) {
        long long count = 0;
        sort(arr, arr+n);
        
        for(int i = 0; i < n-2; i++) {
            int j = i+1;
            int k = n-1;
            
            while(j < k) {
                if((arr[i]+arr[j]+arr[k]) < sum) {
                    count += (k - j);
                    j++;
                } else {
                    k--;
                }
            }
        }
        
        return count;
    }
};