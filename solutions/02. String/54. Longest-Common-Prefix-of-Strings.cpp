// ******** Given an array of strings arr[]. Return the longest common prefix among each and every strings present in the array. If there's no prefix common in all the strings, return "". ********

// <======== Example ========>
// Input: arr[] = ["geeksforgeeks", "geeks", "geek", "geezer"]
// Output: "gee"

// Input: arr[] = ["hello", "world"]
// Output: ""


// Expected Time Complexity ==> O(n*min(|arri|))
// Expected Auxiliary Space ==> O(min(|arri|))




class Solution{
    public:
    string longestCommonPrefix(vector<string> arr) {
        int n = arr.size();
        string ans = "";
        sort(arr.begin(), arr.end());
        
        int i = 0;
        int j = 0;
        string str1 = arr[0];
        string str2 = arr[n-1];
        
        while(i < str1.size() && j < str2.size()) {
            if(str1[i] == str2[j]) {
                ans += str1[i];
                i++;
                j++;
            } else {
                break;
            }
        }
        
        return ans;
    }
};