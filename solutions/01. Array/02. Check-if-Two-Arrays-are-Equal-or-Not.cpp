// ******** Given two arrays a[] and b[] of equal size, the task is to find whether the elements in the arrays are equal. Two arrays are said to be equal if both contain the same set of elements, arrangements (or permutations) of elements may be different though. ********
// Note --> If there are repetitions, then counts of repeated elements must also be the same for two arrays to be equal.

// <======== Example ========>
// Input: a[] = [1, 2, 5, 4, 0], b[] = [2, 4, 5, 0, 1]
// Output: true

// Input: a[] = [1, 2, 5], b[] = [2, 4, 15]
// Output: false




class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();
        map<int, int> mp;
        
        for(int i = 0; i < n; i++) {
            mp[a[i]]++;
        }
        
        for(int i = 0; i < m; i++) {
            mp[b[i]]--;
        }
        
        for(auto x: mp) {
            if(x.second != 0) {
                return false;
            }
        }
        
        return true;
    }
};