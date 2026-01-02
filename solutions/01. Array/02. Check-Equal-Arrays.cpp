// ******** Given two arrays a[] and b[] of equal size, the task is to find whether the elements in the arrays are equal. Two arrays are said to be equal if both contain the same set of elements, arrangements (or permutations) of elements may be different though. ********
// Note --> If there are repetitions, then counts of repeated elements must also be the same for two arrays to be equal.

// <======== Example ========>
// Input: a[] = [1, 2, 5, 4, 0], b[] = [2, 4, 5, 0, 1]
// Output: true

// Input: a[] = [1, 2, 5], b[] = [2, 4, 15]
// Output: false


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        int n = a.size();
        map<int, int> freqA;
        map<int, int> freqB;
        
        for(int i = 0; i < n; i++) {
            freqA[a[i]]++;
            freqB[b[i]]++;
        }
        
        return (freqA == freqB);
    }
};