// ******** Implement a Stack using a Linked List. The stack has dynamic size and can grow until memory is available. The Stack must support the following operations (i) push(x): Insert an element x at the top of the stack. (ii) pop(): Remove the element from the top of the stack. (iii) peek(): Return top element if not empty, else -1. (iv) isEmpty(): Return true if the stack is empty else return false. (v) size(): Return the number of elements currently in the stack. There will be a sequence of queries queries[][] in numeric form: 1 x : Call push(x, 2: Call pop(, 3: Call peek(, 4: Call isEmpty(, 5: Call size(). Implement only the functions push, pop, peek, isEmpty, and size. The driver code handles input and output. ********

// <======== Example ========>
// Input: q = 7, queries[][] = [[1, 5], [1, 3], [1, 4], [3], [2], [5], [4]]
// Output: [4, 2, false]

// Input: q = 4, queries[][] = [[4], [3], [1, 10], [5]]
// Output: [true, -1, 1]


// Expected Time Complexity ==> O(1)
// Expected Auxiliary Space ==> O(n)




class myStack {
    int top;
    Node* curr = NULL;

  public:
    myStack() {
        top = 0;
    }

    bool isEmpty() {
        return (top == 0);
    }

    void push(int x) {
        Node* nodeToInsert = new Node(x);
        nodeToInsert->next = curr;
        curr = nodeToInsert;
        top++;
    }

    void pop() {
        Node* nodeToDelete = curr;
        curr = curr->next;
        nodeToDelete->next = NULL;
        top--;
    }

    int peek() {
        if(top == 0) {
            return -1;
        } else {
            return curr->data;
        }
    }

    int size() {
        return top;
    }
};
