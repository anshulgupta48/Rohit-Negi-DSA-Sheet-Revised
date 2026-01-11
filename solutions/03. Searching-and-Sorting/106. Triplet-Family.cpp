// ******** Given an array arr of integers. First sort the array then find whether three numbers are such that the sum of two elements equals the third element. ********

// <======== Example ========>
// Input: arr[] = [1, 2, 3, 4, 5]
// Output: true

// Input: arr[] = [3, 4, 5]
// Output: false


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