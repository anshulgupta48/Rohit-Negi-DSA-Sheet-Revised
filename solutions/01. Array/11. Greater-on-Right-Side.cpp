// ******** You are given an array arr. Replace every element with the next greatest element (the greatest element on its right side) in the array. ********
// Note --> There is no element next to the last element, so replace it with -1.

// <======== Example ========>
// Input: arr[] = [16, 17, 4, 3, 5, 2]
// Output: [17, 5, 5, 5, 2, -1]

// Input: arr[] = [2, 3, 1, 9]
// Output: [9, 9, 9, -1]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    vector<int> nextGreatest(vector<int> arr) {
        int n = arr.size();
        int maxElement = -1;
        
        for(int i = n-1; i >= 0; i--) {
            int temp = maxElement;
            maxElement = max(maxElement, arr[i]);
            arr[i] = temp;
        }
        
        return arr;
    }
};