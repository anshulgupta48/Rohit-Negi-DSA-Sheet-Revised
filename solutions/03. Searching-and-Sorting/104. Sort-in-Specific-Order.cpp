// ******** Given an array arr[] of positive integers. Your have to sort them so that the first part of the array contains odd numbers sorted in descending order, and the rest of the portion contains even numbers sorted in ascending order. ********

// <======== Example ========>
// Input: arr[] = [1, 2, 3, 5, 4, 7, 10]
// Output: [7, 5, 3, 1, 2, 4, 10]

// Input: arr[] = [0, 4, 5, 3, 7, 2, 1]
// Output: [7, 5, 3, 1, 0, 2, 4]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    void sortIt(vector<int>& arr) {
        int n = arr.size();
        vector<int> oddNums;
        vector<int> evenNums;
        
        for(int i = 0; i < n; i++) {
            if(arr[i]%2 == 0) {
                evenNums.push_back(arr[i]);
            } else {
                oddNums.push_back(arr[i]);
            }
        }
        
        int i = oddNums.size()-1;
        int j = 0;
        int k = 0;
        sort(oddNums.begin(), oddNums.end());
        sort(evenNums.begin(), evenNums.end());
        
        while(i >= 0) {
            arr[k++] = oddNums[i--];
        }
        
        while(j < evenNums.size()) {
            arr[k++] = evenNums[j++];
        }
    }
};