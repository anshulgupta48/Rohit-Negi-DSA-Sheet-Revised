// ******** Tom is a string freak. He has got sequences of words arr[] to manipulate. If in a sequence, two same words come together then Tom destroys each other. Find the number of words left in the sequence after this pairwise destruction. ********

// <======== Example ========>
// Input: arr[] = ["ab", "aa", "aa", "bcd", "ab"]
// Output: 3

// Input: arr[] = ["tom", "jerry", "jerry", "tom"]
// Output: 0


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        int n = arr.size();
        stack<string> st;
        
        for(int i = 0; i < n; i++) {
            if(st.empty() || st.top() != arr[i]) {
                st.push(arr[i]);
            } else {
                st.pop();
            }
        }
        
        return st.size();
    }
};
