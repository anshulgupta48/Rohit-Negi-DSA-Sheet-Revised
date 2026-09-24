// ******** Given an array of negative and non-negative integers. You need to make the array beautiful. An array is beautiful if two adjacent integers, arr[i] and arr[i+1] are either negative or positive. You can do the following operation any number of times until the array becomes beautiful. If two adjacent are different i.e. one of them is negative and other is positive, remove them. Return the beautiful array after performing the above operation. An empty array is also a beautiful array. There can be multiple beautiful output arrays. For consistencty with the test cases, scan the array from left to right for removing two adjacent. ********
// Note --> 0 is considered a positive number in this context.

// <======== Example ========>
// Input: arr[] = [4, 2,-2, 1]
// Output: [4, 1]

// Input: arr[] = [2,-2, -1, 1]
// Output: []


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> ans;
        
        for(int i = 0; i < n; i++) {
            if(st.empty()) {
                st.push(arr[i]);
            }
            else if((st.top() >= 0 && arr[i] < 0) || (st.top() < 0 && arr[i] >= 0)) {
                st.pop();
            }
            else {
                st.push(arr[i]);
            }
        }
        
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
