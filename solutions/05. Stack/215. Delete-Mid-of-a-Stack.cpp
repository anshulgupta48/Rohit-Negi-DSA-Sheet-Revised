// ******** Given a stack s, delete the middle element of the stack without using any additional data structure. The middle element is defined as the floor(size of stack + 1) / 2)-th element from the bottom of the stack (using 1-based indexing). ********
// Note --> The output shown by the compiler is the stack from top to bottom.

// <======== Example ========>
// Input: s = [10, 20, 30, 40, 50]
// Output: [50, 40, 20, 10]

// Input: s = [10, 20, 30, 40]
// Output: [40, 30, 10]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    void deleteMid(stack<int>& s) {
        int n = s.size();
        int mid = n/2;
        stack<int> temp;
        
        for(int i = 0; i < mid; i++) {
            temp.push(s.top());
            s.pop();
        }
        s.pop();
        
        while(!temp.empty()) {
            s.push(temp.top());
            temp.pop();
        }
    }
};
