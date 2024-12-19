// ******** Given two arrays arr1 and arr2 of equal size, the task is to find whether the given arrays are equal. Two arrays are said to be equal if both contain the same set of elements, arrangements (or permutations) of elements may be different though. ********
// Note --> If there are repetitions, then counts of repeated elements must also be the same for two arrays to be equal.

// <======== Example ========>
// Input: arr1[] = [1, 2, 5, 4, 0], arr2[] = [2, 4, 5, 0, 1]
// Output: true

// Input: arr1[] = [1, 2, 5], arr2[] = [2, 4, 15]
// Output: false


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    bool check(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        int m = arr2.size();
        map<int, int> mp;
        
        for(int i = 0; i < n; i++) {
            mp[arr1[i]]++;
        }
        for(int i = 0; i < m; i++) {
            mp[arr2[i]]--;
        }
        
        for(auto x: mp) {
            if(x.second > 0) {
                return false;
            }
        }
        
        return true;
    }
};