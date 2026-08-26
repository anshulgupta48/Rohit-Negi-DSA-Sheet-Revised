// ******** There are n persons on a social media website. You are given an integer array ages where ages[i] is the age of the ith person. A Person x will not send a friend request to a person y (x != y) if any of the following conditions is true: age[y] <= 0.5 * age[x] + 7, age[y] > age[x], age[y] > 100 && age[x] < 100, Otherwise, x will send a friend request to y. Return the total number of friend requests made. ********
// Note --> If x sends a request to y, y will not necessarily send a request to x. Also, a person will not send a friend request to themself.

// <======== Example ========>
// Input: ages = [16,16]
// Output: 2

// Input: ages = [16,17,18]
// Output: 2

// Input: ages = [20,30,100,110,120]
// Output: 3


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int numFriendRequests(vector<int>& ages) {
        int n = ages.size();
        int ans = 0;
        vector<int> count(121, 0);
        vector<int> prefix(121, 0);

        for(int i = 0; i < n; i++) {
            count[ages[i]]++;
        }

        for(int i = 1; i <= 120; i++) {
            prefix[i] = prefix[i-1] + count[i];
        }

        for(int i = 15; i <= 120; i++) {
            if(count[i] == 0) {
                continue;
            }

            int minAge = i/2 + 7;
            int total = prefix[i] - prefix[minAge];
            ans += count[i] * (total-1);
        }

        return ans;
    }
};
