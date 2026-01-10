// ******** Given two arrays a[] and b[], your task is to determine whether b[] is a subset of a[]. ********

// <======== Example ========>
// Input: a[] = [11, 7, 1, 13, 21, 3, 7, 3], b[] = [11, 3, 7, 1, 7]
// Output: true

// Input: a[] = [1, 2, 3, 4, 4, 5, 6], b[] = [1, 2, 4]
// Output: true

// Input: a[] = [10, 5, 2, 23, 19], b[] = [19, 5, 3]
// Output: false


// Expected Time Complexity ==> O(n+m)
// Expected Auxiliary Space ==> O(n+m)




class Solution{
    public:
    bool isSubset(vector<int> &a, vector<int> &b) {
        int n = a.size();
        int m = b.size();
        map<int, int> mp;
        
        for(int i = 0; i < n; i++) {
            mp[a[i]]++;
        }
        
        for(int i = 0; i < m; i++) {
            if(mp[b[i]] == 0) {
                return false;
            } else {
                mp[b[i]]--;
            }
        }
        
        return true;
    }
};