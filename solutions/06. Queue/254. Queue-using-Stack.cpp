// ******** Implement a Queue using stacks. You are allowed to use only stack data structures to implement the queue. The Queue must support the following operations: (i) enqueue(x): Insert an element x at the rear of the queue. (ii) dequeue(): Remove the element from the front of the queue. (iii) front(): Return the front element if the queue is not empty, else return -1. (iv) size(): Return the number of elements currently in the queue. ********

// <======== Example ========>
// Input: q = 7, queries[][] = [[1, 5], [1, 3], [1, 4], [3], [2], [4], [3]]
// Output: [5, 2, 3]

// Input: q = 3, queries[][] = [[3], [4], [1, 10]]
// Output: [-1, 0]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class myQueue {
    stack<int> st;

  public:
    myQueue() {
        
    }

    void enqueue(int x) {
        st.push(x);
    }

    void dequeue() {
        if(st.empty()) {
            return;
        }
        
        int topElement = st.top();
        st.pop();
        
        if(st.empty()) {
            return;
        }
        
        dequeue();
        st.push(topElement);
        return;
    }

    int front() {
        if(st.empty()) {
            return -1;
        }
        
        int topElement = st.top();
        st.pop();

        if(st.empty()) {
            st.push(topElement);
            return topElement;
        }
    
        int frontElement = front();
        st.push(topElement);
        return frontElement;
    }

    int size() {
        return st.size();
    }
};
