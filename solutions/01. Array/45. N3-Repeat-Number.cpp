// ******** You're given a read-only array of N integers. Find out if any integer occurs more than N/3 times in the array in linear time and constant additional space. If so, return the integer. If not, return -1. ********
// Note --> If there are multiple solutions, return any one.

// <======== Example ========>
// Input: [1 2 3 1 1]
// Output: 1




class Solution{
    public:
    int repeatedNumber(const vector<int> &A) {
	    int n = A.size();
        int maxElement1 = -1;
        int maxElement2 = -1;
        int count1 = 0;
        int count2 = 0;
        
        for(int i = 0; i < n; i++) {
            if(maxElement1 == A[i]) {
                count1++;
            }
            else if(maxElement2 == A[i]) {
                count2++;
            }
            else if(count1 == 0) {
                maxElement1 = A[i];
                count1++;
            }
            else if(count2 == 0) {
                maxElement2 = A[i];
                count2++;
            }
            else {
                count1--;
                count2--;
            }
        }
        
        count1 = 0;
        count2 = 0;
        for(int i = 0; i < n; i++) {
            if(maxElement1 == A[i]) {
                count1++;
            }
            else if(maxElement2 == A[i]) {
                count2++;
            }
        }
        
        if(count1 > n/3) {
            return maxElement1;
        }
        else if(count2 > n/3) {
            return maxElement2;
        }
        else {
            return -1;
        }
	}
};