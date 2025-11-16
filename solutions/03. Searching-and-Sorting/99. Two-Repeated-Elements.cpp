// ******** You are given an integer array arr of size n+2. All elements of the array are in the range from 1 to n. Also, all elements occur once except two numbers which occur twice. Find the two repeating numbers. ********
// Note --> Return the numbers in their order of appearing twice. So, if x and y are repeating numbers, and x's second appearance comes before the second appearance of y, then the order should be (x, y).

// <======== Example ========>
// Input: n = 4, arr[] = [1, 2, 1, 3, 4, 3]
// Output: [1, 3]

// Input: n = 2, arr[] = [1, 2, 2, 1]
// Output: [2, 1]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    vector<int> twoRepeated(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        
        for(int i = 0; i < n; i++) {
            if(arr[abs(arr[i])-1] > 0) {
                arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
            } else {
                ans.push_back(abs(arr[i]));
            }
        }
        
        return ans;
    }
};