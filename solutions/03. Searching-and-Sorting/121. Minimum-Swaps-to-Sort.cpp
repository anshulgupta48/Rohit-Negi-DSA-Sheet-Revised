// ******** Given an array arr[] of distinct elements. Find the minimum number of swaps required to sort the array in strictly increasing order. ********

// <======== Example ========>
// Input: arr[] = [2, 8, 5, 4]
// Output: 1

// Input: arr[] = [10, 19, 6, 3, 5]
// Output: 2

// Input: arr[] = [1, 3, 4, 5, 6]
// Output: 0


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    int minSwaps(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        vector<pair<int, int>> v;
        
        for(int i = 0; i < n; i++) {
            v.push_back({arr[i], i});
        }
        sort(v.begin(), v.end());
        
        for(int i = 0; i < n; i++) {
            if(v[i].second == i) {
                continue;
            } else {
                swap(v[i], v[v[i].second]);
                count++;
                i--;
            }
        }
        
        return count;
    }
};
