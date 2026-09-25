// ******** You are given an array arr[] of integers, the task is to find the next greater for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1. ********

// <======== Example ========>
// Input: arr[] = [1, 3, 2, 4]
// Output: [3, 4, 4, -1]

// Input: arr[] = [6, 8, 0, 1, 3]
// Output: [8, -1, 1, 3, -1]

// Input: arr[] = [1, 2, 3, 5]
// Output: [2, 3, 5, -1]

// Input: arr[] = [5, 4, 3, 1]
// Output: [-1, -1, -1, -1]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        stack<int> st;
        
        for(int i = n-1; i >= 0; i--) {
            while(st.size() > 0 && st.top() <= arr[i]) {
                st.pop();
            }
            
            if(st.empty()) {
                ans.push_back(-1);
            } else {
                ans.push_back(st.top());
            }
            st.push(arr[i]);
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
