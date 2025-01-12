// ******** Find the missing element from an ordered array arr[], elements of array arr representing an Arithmetic Progression(AP). ********
// Note --> An element will always exist that, upon inserting into a sequence forms Arithmetic progression. Boundary elements (first and last elements) are not missing.

// <======== Example ========>
// Input: arr[] = [2, 4, 8, 10, 12, 14]
// Output: 6

// Input: arr[] = [1, 6, 11, 16, 21, 31]
// Output: 26


// Expected Time Complexity ==> O(log n)
// Expected Auxiliary Space ==> O(1)




class Solution{
  public:
    int findMissing(vector<int> &arr) {
        int n = arr.size();
        int start = 0;
        int end = n-1;
        int diff = (arr[end] - arr[start]) / n;
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(arr[mid+1]-arr[mid] != diff) {
                return arr[mid]+diff;
            }
            else if(arr[mid]-arr[mid-1] != diff) {
                return arr[mid]-diff;
            }
            else if(arr[mid] == arr[0] + mid*diff) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        
        return start;
    }
};