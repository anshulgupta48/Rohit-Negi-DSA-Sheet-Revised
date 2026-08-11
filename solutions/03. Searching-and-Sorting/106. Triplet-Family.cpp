// ******** Given an array arr[] of integers, check whether there exist three elements such that the sum of two elements is equal to the third element. ********

// <======== Example ========>
// Input: arr[] = [1, 2, 2, 3, 4]
// Output: true

// Input: arr[] = [5, 4, 3]
// Output: false

// Input: arr[] = [0, 0, 1, 0, 0, 1]
// Output: true


// Expected Time Complexity ==> O(n2)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    bool findTriplet(vector<int>& arr) {
        int n = arr.size();
        set<int> st;
        
        for(int i = 0; i < n; i++) {
            st.insert(arr[i]);
        }
        
        for(auto x: st) {
            for(auto y: st) {
                if(x != y && st.count(x+y)) {
                    return true;
                }
            }
        }
        
        return false;
    }
};