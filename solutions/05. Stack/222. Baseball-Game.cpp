// ******** You are keeping the scores for a baseball game with strange rules. At the beginning of the game, you start with an empty record. You are given a list of strings operations, where operations[i] is the ith operation you must apply to the record and is one of the following: An integer x. Record a new score of x. '+'. Record a new score that is the sum of the previous two scores. 'D'. Record a new score that is the double of the previous score. 'C'. Invalidate the previous score, removing it from the record. Return the sum of all the scores on the record after applying all the operations. The test cases are generated such that the answer and all intermediate calculations fit in a 32-bit integer and that all operations are valid. ********

// <======== Example ========>
// Input: ops = ["5","2","C","D","+"]
// Output: 30

// Input: ops = ["5","-2","4","C","D","9","+","+"]
// Output: 27

// Input: ops = ["1","C"]
// Output: 0


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        int ans = 0;
        stack<int> st;

        for(int i = 0; i < n; i++) {
            if(operations[i] != "C" && operations[i] != "D" && operations[i] != "+") {
                int num = stoi(operations[i]);
                st.push(num);
                ans += num;
            }
            else if(operations[i] == "C") {
                ans -= st.top();
                st.pop();
            }
            else if(operations[i] == "D") {
                int num = st.top()*2;
                st.push(num);
                ans += num;
            }
            else {
                int firstNum = st.top();
                st.pop();
                int secondNum = st.top();
                int sum = firstNum + secondNum;
                st.push(firstNum);
                st.push(sum);
                ans += sum;
            }
        }

        return ans;
    }
};
