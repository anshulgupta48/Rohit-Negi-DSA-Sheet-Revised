// ******** Given the head of a singly linked list and an integer n, compute the sum of the last n nodes of the linked list.  If n is greater than or equal to the number of nodes in the linked list,  then return total sum. ********

// <======== Example ========>
// Input: Linked List: 5->9->6->3->4->10, n = 3
// Output: 17

// Input: Linked List: 1->2, n = 2
// Output: 3


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    int sumofNodes(Node* head, int n) {
        int sum = 0;
        int count = 0;
        int totalCount = 0;
        Node* temp = head;
        
        while(temp != NULL) {
            totalCount++;
            temp = temp->next;
        }
        
        temp = head;
        while(temp != NULL) {
            if(count > totalCount-n-1) {
                sum += temp->data;
            }
            count++;
            temp = temp->next;
        }
        
        return sum;
    }
};
