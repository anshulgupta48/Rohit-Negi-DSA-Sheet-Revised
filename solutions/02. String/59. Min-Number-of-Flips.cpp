// ******** Given a binary string s of length n. We need to make this string a sequence of alternate characters by flipping some of the bits, our goal is to minimize the number of bits to be flipped. ********

// <======== Example ========>
// Input: s = "001"
// Output: 1

// Input: s = "0001010111"
// Output: 2


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int minFlips(string& s) {
        int n = s.size();
        int count1 = 0;
        int count2 = 0;
        
        for(int i = 0; i < n; i++) {
            if(i%2 == 0 && s[i] == '0') {
                count1++;
            }
            else if(i%2 == 0 && s[i] == '1') {
                count2++;
            }
            
            if(i%2 != 0 && s[i] == '1') {
                count1++;
            }
            else if(i%2 != 0 && s[i] == '0') {
                count2++;
            }
        }
        
        return min(count1, count2);
    }
};