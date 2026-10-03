// ******** You are given an integer array arr[ ].  The task is to find Previous Smaller Element (PSE) for every element in the array. The Previous Smaller Element (PSE) of an element x is the first element that appears to the left of x in the array and is strictly smaller than x. ********
// Note --> If no such element exists, assign -1 as the PSE for that position.

// <======== Example ========>
// Input: arr[] = [1, 6, 2]
// Output: [-1, 1, 1]

// Input: arr[] = [1, 5, 0, 3, 4, 5]
// Output: [-1, 1, -1, 0, 3, 4]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> ans(n, -1);
        
        for(int i = n-1; i >= 0; i--) {
            while(!st.empty() && arr[st.top()] > arr[i]) {
                int index = st.top();
                st.pop();
                ans[index] = arr[i];
            }
            
            st.push(i);
        }
        
        return ans;
    }
};
