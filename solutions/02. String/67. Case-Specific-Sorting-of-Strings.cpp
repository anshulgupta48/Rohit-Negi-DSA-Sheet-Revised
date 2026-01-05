// ******** Given a string s consisting of only uppercase and lowercase characters. The task is to sort uppercase and lowercase letters separately such that if the ith place in the original string had an Uppercase character then it should not have a lowercase character after being sorted and vice versa. ********

// <======== Example ========>
// Input: s = "GEekS"
// Output: EGekS

// Input: s = "XWMSPQ"
// Output: MPQSWX


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    string caseSort(string& s) {
        int n = s.size();
        vector<char> lowerCase;
        vector<char> upperCase;
        
        for(int i = 0; i < n; i++) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                lowerCase.push_back(s[i]);
            } else {
                upperCase.push_back(s[i]);
            }
        }
        
        int i = 0;
        int j = 0;
        sort(lowerCase.begin(), lowerCase.end());
        sort(upperCase.begin(), upperCase.end());
        
        for(int k = 0; k < n; k++) {
            if(s[k] >= 'a' && s[k] <= 'z') {
                s[k] = lowerCase[i++];
            } else {
                s[k] = upperCase[j++];
            }
        }
        
        return s;
    }
};