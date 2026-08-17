// ******** Given two arrays a[] and b[]. Find number of pairs such that xy > yx where x is an element from a[] and y is an element from b[]. Returns an integer denoting the number of pairs that are true to the given condition. ********

// <======== Example ========>
// Input: a[] = [2, 1, 6], b[] = [1, 5]
// Output: 3

// Input: a[] = [10, 19, 18], b[] = [11, 15, 9]
// Output: 2


// Expected Time Complexity ==> O(n*m)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int countPairs(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();
        int count = 0;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(pow(a[i], b[j]) > pow(b[j], a[i])) {
                    count++;
                }
            }
        }
        
        return count;
    }
};
