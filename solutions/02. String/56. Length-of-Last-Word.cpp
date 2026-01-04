// ******** Given a string s consisting of words and spaces, return the length of the last word in the string. A word is a maximal substring consisting of non-space characters only. ********

// <======== Example ========>
// Input: s = "Hello World"
// Output: 5

// Input: s = "   fly me   to   the moon  "
// Output: 4

// Input: s = "luffy is still joyboy"
// Output: 6


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count = 0;
        bool isLastWord = false;

        for(int i = n-1; i >= 0; i--) {
            if(s[i] == ' ') {
                if(isLastWord == true) {
                    break;
                }
            } else {
                count++;
                isLastWord = true;
            }
        }

        return count;
    }
};