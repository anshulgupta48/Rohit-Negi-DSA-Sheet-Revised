// ******** Implement a Queue using an Array, where the size of the array, n is given. The Queue must support the following operations: (i) enqueue(x): Insert an element x at the rear of the queue. (ii) dequeue(): Remove the element from the front of the queue. (iii) getFront(): Return front element if not empty, else -1. (iv) getRear(): Return rear element if not empty, else -1. (v) isEmpty(): Return true if the queue is empty else return false. (vi) isFull(): Return true if the queue is full else return false. You just have to implement the functions enqueue, dequeue, getFront, getRear, isEmpty and isFull and the driver code will handle the output. ********

// <======== Example ========>
// Input: n = 3, q = 7, queries[][] = [[1, 5], [1, 3], [1, 4], [3], [2], [5], [4]]
// Output: [5, false, 4]

// Input: n = 2, q = 4, queries[][] = [[4], [1, 3], [1, 7], [6]]
// Output: [-1, true]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class myQueue {
    int size;
    int *arr;
    int front;
    int rear;

  public:
    myQueue(int n) {
        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1);
    }

    bool isFull() {
        return ((rear+1)%size == front);
    }

    void enqueue(int x) {
        if(isFull()) {
            return;
        }
        
        if(isEmpty()) {
            front = 0;
            rear = 0;
        } else {
            rear = (rear+1) % size;
        }
        
        arr[rear] = x;
    }

    void dequeue() {
        if(isEmpty()) {
            return;
        }
        
        if(front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front+1) % size;
        }
    }

    int getFront() {
        if(isEmpty()) {
            return -1;
        }
        
        return arr[front];
    }

    int getRear() {
        if(isEmpty()) {
            return -1;
        }
        
        return arr[rear];
    }
};
