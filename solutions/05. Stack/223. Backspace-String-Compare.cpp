// ******** Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character. Note that after backspacing an empty text, the text will continue empty. ********

// <======== Example ========>
// Input: s = "ab#c", t = "ad#c"
// Output: true

// Input: s = "ab##", t = "c#d#"
// Output: true

// Input: s = "a#c", t = "b"
// Output: false


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    string processString(string str) {
        int n = str.size();
        string processedStr = "";

        for(int i = 0; i < n; i++) {
            if(!processedStr.empty() && str[i] == '#') {
                processedStr.pop_back();
            }
            else if(str[i] != '#') {
                processedStr.push_back(str[i]);
            }
        }

        return processedStr;
    }

    bool backspaceCompare(string s, string t) {
        return (processString(s) == processString(t));
    }
};
