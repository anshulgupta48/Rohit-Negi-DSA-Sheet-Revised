// ******** You are standing at position 0 on an infinite number line. There is a destination at position target. You can make some number of moves numMoves so that: On each move, you can either go left or right. During the ith move (starting from i == 1 to i == numMoves), you take i steps in the chosen direction. Given the integer target, return the minimum number of moves required (i.e., the minimum numMoves) to reach the destination. ********

// <======== Example ========>
// Input: target = 2
// Output: 3

// Input: target = 3
// Output: 2


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int reachNumber(int target) {
        int sum = 0;
        int count = 0;
        target = abs(target);

        while(true) {
            count++;
            sum += count;

            if((sum >= target) && ((sum-target)%2 == 0)) {
                return count;
            }
        }

        return -1;
    }
};
