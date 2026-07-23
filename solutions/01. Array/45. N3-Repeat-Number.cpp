// ******** You're given a read-only array of N integers. Find out if any integer occurs more than N/3 times in the array in linear time and constant additional space. If so, return the integer. If not, return -1. If there are multiple solutions, return any one. ********

// <======== Example ========>
// Input: arr[] = [1 2 3 1 1]
// Output: 1


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int Solution::repeatedNumber(const vector<int> &A) {
        int n = A.size();
        int count1 = 0, count2 = 0;
        int element1 = -1, element2 = -1;
        
        for(int i = 0; i < n; i++) {
            if(A[i] == element1) {
                count1++;
            }
            else if(A[i] == element2) {
                count2++;
            }
            else if(count1 == 0) {
                element1 = A[i];
                count1++;
            }
            else if(count2 == 0) {
                element2 = A[i];
                count2++;
            }
            else {
                count1--;
                count2--;
            }
        }
        
        count1 = 0, count2 = 0;
        for(int i = 0; i < n; i++) {
            if(A[i] == element1) {
                count1++;
            }
            else if(A[i] == element2) {
                count2++;
            }
        }
        
        int ans = (count1 > n/3) ? element1 : (count2 > n/3 ? element2 : -1);
        return ans;
    };
};