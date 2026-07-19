// ******** Frogs are positioned at one end of a pond, and each wants to reach the other end. The pond has some leaves arranged in a straight line. Each frog has a strength s, meaning it jumps exactly s leaves at a time - for example, a frog with strength 2 visits leaves 2, 4, 6, and so on while crossing the pond. Given the strength of each frog (as an array arr[]) and the total number of leaves k, find how many leaves are not visited by any frog after all frogs have crossed the pond. ********

// <======== Example ========>
// Input: arr[] = [3, 2, 4], k = 4
// Output: 1

// Input: arr[] = [1, 3, 5], k = 6
// Output: 0


// Expected Time Complexity ==> O(n + k*logk)
// Expected Auxiliary Space ==> O(k)




class Solution{
    public:
    int unvisitedLeaves(vector<int>& arr, int k) {
        int n = arr.size();
        int count = 0;
        vector<bool> isVisited(k+1, false);
        
        for(int i = 0; i < n; i++) {
            int temp = arr[i];
            
            if(temp <= k && isVisited[temp] == false) {
                for(int j = temp; j <= k; j += temp) {
                    isVisited[j] = true;
                }
            }
        }
        
        for(int i = 1; i <= k; i++) {
            if(isVisited[i] == false) {
                count++;
            }
        }
        
        return count;
    }
};