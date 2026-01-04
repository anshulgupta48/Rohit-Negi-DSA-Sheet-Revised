// ******** Given an array of strings arr[]. Return the longest common prefix among each and every strings present in the array. If there's no prefix common in all the strings, return "". ********

// <======== Example ========>
// Input: arr[] = ["geeksforgeeks", "geeks", "geek", "geezer"]
// Output: "gee"

// Input: arr[] = ["hello", "world"]
// Output: ""


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    string longestCommonPrefix(vector<string> arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        string ans = "";
        string str1 = arr[0];
        string str2 = arr[n-1];
        
        int i = 0;
        int j = 0;
        
        while(i < str1.size() && j < str2.size()) {
            if(str1[i] != str2[j]) {
                break;
            }
            
            ans += str1[i];
            i++;
            j++;
        }
        
        return ans;
    }
};