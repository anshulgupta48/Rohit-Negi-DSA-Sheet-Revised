// ******** Given an array of integers arr[], sort the array according to the frequency of elements, i.e. elements that have higher frequency comes first. If the frequencies of two elements are the same, then the smaller number comes first. ********

// <======== Example ========>
// Input: arr[] = [5, 5, 4, 6, 4]
// Output: [4, 4, 5, 5, 6]

// Input: arr[] = [9, 9, 9, 2, 5]
// Output: [9, 9, 9, 2, 5]


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    static bool compareFreq(pair<int, int> a, pair<int, int> b) {
        if(a.second != b.second) {
            return (a.second > b.second);
        } else {
            return (a.first < b.first);
        }
    }
    
    vector<int> sortByFreq(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        vector<pair<int, int>> temp;
        map<int, int> mp;
        
        for(int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        
        for(int i = 0; i < n; i++) {
            temp.push_back({arr[i], mp[arr[i]]});
        }
        
        sort(temp.begin(), temp.end(), compareFreq);
        for(int i = 0; i < n; i++) {
            ans.push_back(temp[i].first);
        }
        
        return ans;
    }
};
