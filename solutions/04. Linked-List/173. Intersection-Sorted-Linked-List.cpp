// ******** Given two linked lists sorted in increasing order, create a new linked list containing the intersection of the two linked lists. The intersection should contain an element as many times as it appears in both linked lists. The original linked lists must not be modified. ********

// <======== Example ========>
// Input: head1 = 1 -> 2 -> 3 -> 4 -> 6, head2 = 2 -> 4 -> 6 -> 8
// Output: 2->4->6

// Input: head1= 10 -> 20 -> 40 -> 50, head2= 15 -> 40
// Output: 40


// Expected Time Complexity ==> O(n+m)
// Expected Auxiliary Space ==> O(n+m)




class Solution{
    public:
    void insertAtEnd(Node* &head, Node* &tail, int data) {
        Node* newNode = new Node(data);
        
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    Node* findIntersection(Node* head1, Node* head2) {
        Node* temp1 = head1;
        Node* temp2 = head2;
        Node* newHead = NULL;
        Node* newTail = NULL;
        
        while(temp1 != NULL && temp2 != NULL) {
            if(temp1->data == temp2->data) {
                insertAtEnd(newHead, newTail, temp1->data);
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            else if(temp1->data < temp2->data) {
                temp1 = temp1->next;
            }
            else {
                temp2 = temp2->next;
            }
        }
        
        return newHead;
    }
};
