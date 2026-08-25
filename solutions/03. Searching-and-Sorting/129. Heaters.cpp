// ******** Winter is coming! During the contest, your first job is to design a standard heater with a fixed warm radius to warm all the houses. Every house can be warmed, as long as the house is within the heater's warm radius range. Given the positions of houses and heaters on a horizontal line, return the minimum radius standard of heaters so that those heaters could cover all houses. Notice that all the heaters follow your radius standard, and the warm radius will be the same. ********

// <======== Example ========>
// Input: houses = [1,2,3], heaters = [2]
// Output: 1

// Input: houses = [1,2,3,4], heaters = [1,4]
// Output: 1

// Input: houses = [1,5], heaters = [2]
// Output: 3


// Expected Time Complexity ==> O(n*logn + m*logm)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    bool isValidRadius(int mid, vector<int>& houses, vector<int>& heaters) {
        int n = houses.size();
        int m = heaters.size();
        int i = 0;
        int j = 0;

        while(i < n && j < m) {
            while(j < m && abs(houses[i]-heaters[j]) > mid) {
                j++;

                if(j == m) {
                    return false;
                }
            }

            i++;
        }

        return (i == n);
    }

    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int ans = 0;
        int start = 0;
        int end = 1e9;
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());

        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(isValidRadius(mid, houses, heaters)) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return ans;
    }
};
