// ******** Given the head of a singly linked list, Returns true if the linked list is circular & false if it is not circular. A linked list is called circular if it is not NULL terminated and all nodes are connected in the form of a cycle. ********
// Note --> Linked list should not contain any inner loop. And a empty linked list is always a circular linked list.

// <======== Example ========>
// Input: 2-->4-->6-->7-->5-->2
// Output: true

// Input: 2-->4-->6-->7-->5-->1-->NULL
// Output: false


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    bool isCircular(Node *head) {
        Node* temp = head;
        
        while(temp != NULL) {
            temp = temp->next;
            
            if(temp == head) {
                return true;
            }
        }
        
        return false;
    }
};
