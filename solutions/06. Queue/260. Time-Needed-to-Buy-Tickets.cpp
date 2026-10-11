// ******** There are n people in a line queuing to buy tickets, where the 0th person is at the front of the line and the (n - 1)th person is at the back of the line. You are given a 0-indexed integer array tickets of length n where the number of tickets that the ith person would like to buy is tickets[i]. Each person takes exactly 1 second to buy a ticket. A person can only buy 1 ticket at a time and has to go back to the end of the line (which happens instantaneously) in order to buy more tickets. If a person does not have any tickets left to buy, the person will leave the line. Return the time taken for the person initially at position k (0-indexed) to finish buying tickets. ********

// <======== Example ========>
// Input: tickets = [2,3,2], k = 2
// Output: 6

// Input: tickets = [5,1,1,1], k = 0
// Output: 8


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        int count = 0;
        queue<pair<int, int>> q;

        for(int i = 0; i < n; i++) {
            q.push({tickets[i], i});
        }

        while(!q.empty()) {
            pair<int, int> temp = q.front();
            temp.first--;
            q.pop();
            count++;

            if(temp.first == 0 && temp.second == k) {
                return count;
            }

            if(temp.first > 0) {
                q.push(temp);
            }
        }

        return count;
    }
};
