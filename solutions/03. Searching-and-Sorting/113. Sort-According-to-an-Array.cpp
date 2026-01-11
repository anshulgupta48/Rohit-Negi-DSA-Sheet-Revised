// ******** Given two integer arrays a1[] and a2[]. Sort the first array a1[] such that all the relative positions of the elements in the first array are the same as the elements in the second array a2[]. ********
// Note --> If elements are repeated in the second array, consider their first occurance only. Elements not in a2[] should appear in a1[] at the end in ascending order.

// <======== Example ========>
// Input: a1[] = [2, 1, 2, 3, 4], a2[] = [2, 1, 2]
// Output: [2, 2, 1, 3, 4]

// Input: a1[] = [4, 1, 3, 3, 2], a2[] = [3, 1]
// Output: [3, 3, 1, 2, 4]


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    void relativeSort(vector<int>& a1, vector<int>& a2) {
        int n = a1.size();
        int m = a2.size();
        int i = 0;
        map<int, int> mp;
        
        for(int j = 0; j < n; j++) {
            mp[a1[j]]++;
        }
        
        for(int j = 0; j < m; j++) {
            while(mp[a2[j]]--) {
                a1[i++] = a2[j];
            }
            mp[a2[j]] = 0;
        }
        
        for(auto x: mp) {
            while(mp[x.first]--) {
                a1[i++] = x.first;
            }
        }
    }
};