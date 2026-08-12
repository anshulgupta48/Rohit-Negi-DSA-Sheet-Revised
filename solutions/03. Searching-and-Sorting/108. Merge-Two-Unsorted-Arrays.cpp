// ******** Given two different unsorted arrays a[] and b[], the task is to merge the two unsorted arrays and return a sorted array. ********

// <======== Example ========>
// Input: a[] = [10, 5, 15], b[] = [20, 3, 2]
// Output: [2, 3, 5, 10, 15, 20]

// Input: a[] = [1, 10, 5, 15], b[] = [20, 0, 2]
// Output: [0, 1, 2, 5, 10, 15, 20]


// Expected Time Complexity ==> O(n*logn + m*logm)
// Expected Auxiliary Space ==> O(n+m)




class Solution{
    public:
    vector<int> sortedMerge(vector<int>& a, vector<int>& b) {
        int i = 0;
        int j = 0;
        vector<int> ans;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        while(i < a.size() && j < b.size()) {
            if(a[i] < b[j]) {
                ans.push_back(a[i]);
                i++;
            } else {
                ans.push_back(b[j]);
                j++;
            }
        }
        
        while(i < a.size()) {
            ans.push_back(a[i]);
            i++;
        }
        
        while(j < b.size()) {
            ans.push_back(b[j]);
            j++;
        }
        
        return ans;
    }
};