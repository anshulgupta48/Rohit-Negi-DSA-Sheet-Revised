// ******** Implement a Stack using an Array, where the size of the array, n is given. The Stack must support the following operations: (i) push(x): Insert an element x at the top of the stack. (ii) pop(): Remove the element from the top of the stack. (iii) peek(): Return the top element if not empty, else -1. (iv) isEmpty(): Return true if the stack is empty else return false. (v) isFull(): Return true if the stack is full else return false. There will be a sequence of queries queries[][]. The queries are represented in numeric form: 1 x : Call push(x), 2 : Call pop(), 3 : Call peek(), 4  : Call isEmpty(), 5 : Call isFull(). You just have to implement the functions push, pop, peek, isEmpty, and isFull. The driver code will handle the output. ********
// Note --> All the queries are valid.

// <======== Example ========>
// Input: n = 3, q = 6, queries[][] = [[1, 5], [1, 3], [3], [2], [4], [5]]
// Output: [3, false, false]

// Input: n = 1, q = 5, queries[][] = [[2], [3], [4], [1, 9], [5]]
// Output: [-1, -1, true, true]


// Expected Time Complexity ==> O(1)
// Expected Auxiliary Space ==> O(1)




class myStack {
    int top;
    int size;
    vector<int> arr;
    
  public:
    myStack(int n) {
        top = -1;
        size = n;
        arr.resize(n);
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == size-1);
    }

    void push(int x) {
        if(isFull()) {
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if(isEmpty()) {
            return;
        }
        top--;
    }

    int peek() {
        if(isEmpty()) {
            return -1;
        }
        return arr[top];
    }
};
