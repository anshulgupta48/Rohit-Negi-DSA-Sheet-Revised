// ******** Given an unsorted array arr containing both positive and negative numbers. Your task is to rearrange the array and convert it into an array of alternate positive and negative numbers without changing the relative order. ********
// Note --> Resulting array should start with a positive integer (0 will also be considered as a positive integer). If any of the positive or negative integers are exhausted, then add the remaining integers in the answer as it is by maintaining the relative order. The array may or may not have the equal number of positive and negative integers.

// <======== Example ========>
// Input: arr[] = [9, 4, -2, -1, 5, 0, -5, -3, 2]
// Output: [9, -2, 4, -1, 5, -5, 0, -3, 2]

// Input: arr[] = [-5, -2, 5, 2, 4, 7, 1, 8, 0, -8]
// Output: [5, -5, 2, -2, 4, -8, 7, 1, 8, 0]

// Input: arr[] = [9, 5, -2, -1, 5, 0, -5, -3, 2]
// Output: [9, -2, 5, -1, 5, -5, 0, -3, 2]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    void rearrange(vector<int> &arr) {
        int n = arr.size();
        vector<int> pos;
        vector<int> neg;
        
        for(int i = 0; i < n; i++) {
            if(arr[i] >= 0) {
                pos.push_back(arr[i]);
            } else {
                neg.push_back(arr[i]);
            }
        }
        
        int i = 0;
        int j = 0;
        int k = 0;
        
        while(i < pos.size() && j < neg.size()) {
            arr[k++] = pos[i++];
            arr[k++] = neg[j++];
        }
        
        while(i < pos.size()) {
            arr[k++] = pos[i++];
        }
        
        while(j < neg.size()) {
            arr[k++] = neg[j++];
        }
    }
};