// ******** Given an array arr[], implement the functions: fillQ(): Enqueue all elements of the array into a queue and return the queue. emptyQ(): Dequeue all elements from the queue and print them in a single line, separated by spaces, followed by a newline. ********

// <======== Example ========>
// Input: arr[] = [1, 2, 3, 4, 5]
// Output: [1, 2, 3, 4, 5]

// Input: arr[] = [1, 6, 43, 1, 2, 0, 5]
// Output: [1, 6, 43, 1, 2, 0, 5]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    queue<int> fillQ(const vector<int>& arr) {
        int n = arr.size();
        queue<int> q;
        
        for(int i = 0; i < n; i++) {
            q.push(arr[i]);
        }
        
        return q;
    }

    void emptyQ(queue<int>& q) {
        while(!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }
        cout << endl;
    }
};
