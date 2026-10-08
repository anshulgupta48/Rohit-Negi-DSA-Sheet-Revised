// ******** Given an integer k and a queue of integers, we need to reverse the order of the first k elements of the queue, leaving the other elements in the same relative order. Only following standard operations are allowed on queue. enqueue(x) : Add an item x to rear of queue, dequeue() : Remove an item from front of queue, size() : Returns number of elements in queue., front() : Finds front item. ********
// Note --> The above operations represent the general processings. In-built functions of the respective languages can be used to solve the problem. If the size of queue is smaller than the given k, then return the original queue.

// <======== Example ========>
// Input: q = [1, 2, 3, 4, 5], k = 3
// Output: [3, 2, 1, 4, 5]

// Input: q = [4, 3, 2, 1], k = 4
// Output: [1, 2, 3, 4]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        int n = q.size();
        stack<int> st;
        queue<int> ans;
        
        if(k > n) {
            return q;
        }
        
        while(k > 0) {
            st.push(q.front());
            q.pop();
            k--;
        }
        
        while(st.size() > 0) {
            ans.push(st.top());
            st.pop();
        }
        
        while(!q.empty()) {
            ans.push(q.front());
            q.pop();
        }
        
        return ans;
    }
};
