// ******** Given an array arr[] , return the final array by repeatedly apply the following operation from left to right until no more valid operations can be performed. If two adjacent elements have opposite signs: If their absolute values are different, remove both elements and insert the one with the greater absolute value, preserving its sign. If their absolute values are equal, remove both elements without inserting any new element. ********

// <======== Example ========>
// Input: arr[] = [10, -5, -8, 2, -5]
// Output: [10]

// Input: arr[] = [5, -5, -2, -10]
// Output: [-2, -10]

// Input: arr[] = [-20, 1, 20]
// Output: []


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    vector<int> reducePairs(vector<int>& arr) {
        int n = arr.size();
        int i = 1;
        vector<int> ans;
        ans.push_back(arr[0]);
        
        while(i < n) {
            int currElement = arr[i];
            bool isRemoved = false;
            
            while(!ans.empty() && ((ans.back() > 0 && currElement < 0) || (ans.back() < 0 && currElement > 0))) {
                if(abs(ans.back()) < abs(currElement)) {
                    ans.pop_back();
                }
                else if(abs(ans.back()) == abs(currElement)) {
                    ans.pop_back();
                    isRemoved = true;
                    break;
                }
                else {
                    isRemoved = true;
                    break;
                }
            }
            
            if(!isRemoved) {
                ans.push_back(arr[i]);
            }
            i++;
        }
        
        return ans;
    }
};
