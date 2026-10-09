// ******** Given a queue q containing integer elements, your task is to reverse the queue. ********

// <======== Example ========>
// Input: q[] = [5, 10, 15, 20, 25]
// Output: [25, 20, 15, 10, 5]

// Input: q[] = [1, 2, 3, 4, 5]
// Output: [5, 4, 3, 2, 1]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        stack<int> st;
        
        while(!q.empty()) {
            st.push(q.front());
            q.pop();
        }
        
        while(st.size() > 0) {
            q.push(st.top());
            st.pop();
        }
    }
};
