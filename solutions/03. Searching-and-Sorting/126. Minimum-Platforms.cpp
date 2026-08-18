// ******** Given arrival arr[] and departure dep[] times of trains on the same day, find the minimum number of platforms needed so that no train waits. A platform cannot serve two trains at the same time; if a train arrives before another departs, an extra platform is needed. ********
// Note --> Time intervals are in the 24-hour format (HHMM) , where the first two characters represent hour (between 00 to 23 ) and the last two characters represent minutes (this will be <= 59 and >= 0). Leading zeros for hours less than 10 are optional (e.g., 0900 is the same as 900).

// <======== Example ========>
// Input: arr[] = [900, 940, 950, 1100, 1500, 1800], dep[] = [910, 1200, 1120, 1130, 1900, 2000]
// Output: 3

// Input: arr[] = [900, 1235, 1100], dep[] = [1000, 1240, 1200]
// Output: 1

// Input: arr[] = [1000, 935, 1100], dep[] = [1200, 1240, 1130]
// Output: 3


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        int ans = 0;
        int count = 0;
        int i = 0;
        int j = 0;
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());
        
        while(i < arr.size() && j < dep.size()) {
            if(arr[i] <= dep[j]) {
                i++;
                count++;
            } else {
                j++;
                count--;
            }
            
            ans = max(ans, count);
        }
        
        return ans;
    }
};
