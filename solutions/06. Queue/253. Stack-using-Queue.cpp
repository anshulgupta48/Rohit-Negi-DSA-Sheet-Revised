// ******** Implement a Stack using Queue data structure, this stack has no fixed capacity and can grow dynamically until memory is available. The Stack must support the following operations: (i) push(x): Insert an element x at the top of the stack. (ii) pop(): Remove the element from the top of the stack, if stack is empty do nothing. (iii) top(): Return top element if not empty, else -1. (iv) size(): Return the number of elements currently in the stack. ********

// <======== Example ========>
// Input: q = 6, queries[][] = [[1, 5], [1, 3], [1, 4], [3], [2], [4]]
// Output: [4, 2]

// Input: q = 4, queries[][] = [[4], [3], [1, 10], [3]]
// Output: [0, -1, 10]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class myStack {
    queue<int> q;

  public:
    void push(int x) {
        int n = q.size();
        q.push(x);
        
        for(int i = 0; i < n; i++) {
            int frontElement = q.front();
            q.pop();
            q.push(frontElement);
        }
    }

    void pop() {
        if(q.empty()) {
            return;
        }
        
        q.pop();
    }

    int top() {
        if(q.empty()) {
            return -1;
        }
        
        return q.front();
    }

    int size() {
        return q.size();
    }
};
