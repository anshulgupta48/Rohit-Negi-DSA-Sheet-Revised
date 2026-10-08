// ******** Implement a Queue using a Linked List, this queue has no fixed capacity and can grow dynamically until memory is available. The Queue must support the following operations: (i) enqueue(x): Insert an element x at the rear of the queue. (ii) dequeue(): Remove the front element from the queue. If the queue is empty, do nothing. (iii) getFront(): Return front element if not empty, else -1. (iv) isEmpty(): Return true if the queue is empty else return false. (v) size(): Return the number of elements currently in the queue. You just have to implement the functions enqueue, dequeue, getFront, isEmpty and size. The driver code will handle the input and output. ********

// <======== Example ========>
// Input: q = 7, queries[][] = [[1, 5], [1, 3], [1, 4], [3], [2], [5], [4]]
// Output: [5, 2, false]

// Input: q = 4, queries[][] = [[4], [3], [1, 10], [5]]
// Output: [true, -1, 1]


// Expected Time Complexity ==> O(1)
// Expected Auxiliary Space ==> O(1)




class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class myQueue {
    Node* front;
    Node* rear;
    int count;

  public:
    myQueue() {
        front = NULL;
        rear = NULL;
        count = 0;
    }

    bool isEmpty() {
        return (front == NULL);
    }

    void enqueue(int x) {
        Node* nodeToInsert = new Node(x);
        count++;
        
        if(isEmpty()) {
            front = nodeToInsert;
            rear = nodeToInsert;
        } else {
            rear->next = nodeToInsert;
            rear = nodeToInsert;
        }
    }

    void dequeue() {
        if(isEmpty()) {
            return;
        }
        
        front = front->next;
        count--;
        
        if(front == NULL) {
            rear = NULL;
        }
    }

    int getFront() {
        if(isEmpty()) {
            return -1;
        }
        
        return front->data;
    }

    int size() {
        return count;
    }
};
