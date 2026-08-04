// ******** Find if the given number is a power of 2 or not. More specifically, find if the given number can be expressed as 2^k where k >= 1. ********
// Note --> The number length can be more than 64, which means the number can be greater than 2 ^ 64 (out of long long range).

// <======== Example ========>
// Input: A = '128'
// Output: '1'


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int Solution::power(string A) {
        if(A == "1") {
            return 0;
        }
        
        while(A != "1") {
            string quotient = "";
            int carry = 0;
            
            for(char x: A) {
                int num = carry*10 + (x-'0');
                quotient += (num/2) + '0';
                carry = num % 2;
            }
            
            if(carry != 0) {
                return 0;
            }
            
            int i = 0;
            while(i < quotient.size()-1 && quotient[i] == '0') {
                i++;
            }
            A = quotient.substr(i);
        }
        
        return 1;
    };
};