// ******** Given two sorted arrays a[] and b[], where each array may contain duplicate elements , the task is to return the elements in the union of the two arrays in sorted order. Union of two arrays can be defined as the set containing distinct common elements that are present in either of the arrays. ********

// <======== Example ========>
// Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3, 6, 7]
// Output: [1, 2, 3, 4, 5, 6, 7]

// Input: a[] = [2, 2, 3, 4, 5], b[] = [1, 1, 2, 3, 4]
// Output: [1, 2, 3, 4, 5]

// Input: a[] = [1, 1, 1, 1, 1], b[] = [2, 2, 2, 2, 2]
// Output: [1, 2]


// Expected Time Complexity ==> O(n*m)
// Expected Auxiliary Space ==> O(n+m)




class Solution{
    public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int i = 0;
        int j = 0;
        vector<int> ans;
        
        while(i < a.size() && j < b.size()) {
            if(a[i] < b[j]) {
                if(ans.size() == 0 || ans.back() != a[i]) {
                    ans.push_back(a[i]);
                }
                i++;
            } else {
                if(ans.size() == 0 || ans.back() != b[j]) {
                    ans.push_back(b[j]);
                }
                j++;
            }
        }
        
        while(i < a.size()) {
            if(ans.size() == 0 || ans.back() != a[i]) {
                ans.push_back(a[i]);
            }
            i++;
        }
        
        while(j < b.size()) {
            if(ans.size() == 0 || ans.back() != b[j]) {
                ans.push_back(b[j]);
            }
            j++;
        }
        
        return ans;
    }
};