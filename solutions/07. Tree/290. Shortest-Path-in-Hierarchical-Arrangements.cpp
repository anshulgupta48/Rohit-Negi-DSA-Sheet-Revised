// ******** In a special city, houses are arranged in a hierarchical manner. Starting from house 1, every house is connected to two new houses. For example: 1 is connected to 2 and 3, 2 is connected to 4 and 5, 3 is connected to 6 and 7 and so on. Given two house numbers x and y, determine the length of the shortest path between them. ********

// <======== Example ========>
// Input: x = 2, y = 6
// Output: 3

// Input: x = 8, y = 10
// Output: 4


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution {
  public:
    int shortestPath(int x, int y) {
        int count = 0;
        
        while(x != y) {
            if(x > y) {
                x = x / 2;
            } else {
                y = y / 2;
            }
            
            count++;
        }
        
        return count;
    }
};
