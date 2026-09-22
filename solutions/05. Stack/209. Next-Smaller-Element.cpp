// ******** You are given an integer array arr[]. For every element in the array, your task is to determine its Next Smaller Element (NSE). The Next Smaller Element (NSE) of an element x is the first element that appears to the right of x in the array and is strictly smaller than x. If no such element exists, assign -1 as the NSE for that position. ********

// <======== Example ========>
// Input: arr[] = [4, 8, 5, 2, 25]
// Output: [2, 5, 2, -1, -1]

// Input: arr[] = [4, 1]
// Output: [1, -1]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        st.push(-1);
        
        for(int i = n-1; i >= 0; i--) {
            while(st.top() >= arr[i]) {
                st.pop();
            }
            
            ans[i] = st.top();
            st.push(arr[i]);
        }
        
        return ans;
    }
};
