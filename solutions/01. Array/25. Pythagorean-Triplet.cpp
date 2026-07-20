// ******** Given an array arr[], return true if there is a triplet (a, b, c) from the array (where a, b, and c are on different indexes) that satisfies a2 + b2 = c2, otherwise return false. ********

// <======== Example ========>
// Input: arr[] = [3, 2, 4, 6, 5]
// Output: true

// Input: arr[] = [3, 8, 5]
// Output: false

// Input: arr[] = [1, 1, 1]
// Output: false


// Expected Time Complexity ==> O(n2)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    bool pythagoreanTriplet(vector<int>& arr) {
        int n = arr.size();
        set<int> st;
        
        for(int i = 0; i < n; i++) {
            st.insert(arr[i] * arr[i]);
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