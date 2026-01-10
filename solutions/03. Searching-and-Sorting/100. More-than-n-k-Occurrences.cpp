// ******** Given an array arr and an element k. The task is to find the count of elements in the array that appear more than n/k times and n is length of arr. ********

// <======== Example ========>
// Input: arr = [3, 1, 2, 2, 1, 2, 3, 3], k = 4
// Output: 2

// Input: arr = [2, 3, 3, 2], k = 3
// Output: 2

// Input: arr = [1, 4, 7, 7], k = 2
// Output: 0


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    int countOccurence(vector<int>& arr, int k) {
        int n = arr.size();
        int count = 0;
        map<int, int> mp;
        
        for(int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        
        for(auto x: mp) {
            if(x.second > n/k) {
                count++;
            }
        }
        
        return count;
    }
};