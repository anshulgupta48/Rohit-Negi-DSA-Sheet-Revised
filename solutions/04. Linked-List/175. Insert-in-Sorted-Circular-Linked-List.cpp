// ******** Given a sorted circular linked list, the task is to insert a new node in this circular linked list so that it remains a sorted circular linked list. ********

// <======== Example ========>
// Input: head = 1->2->4, data = 2
// Output: 1->2->2->4

// Input: head = 1->4->7->9, data = 5
// Output: 1->4->5->7->9


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    Node* sortedInsert(Node* head, int data) {
        Node* temp = head;
        Node* nodeToInsert = new Node(data);
        
        if(head == NULL) {
            nodeToInsert->next = nodeToInsert;
            return nodeToInsert;
        }
        
        if(data < head->data) {
            while(temp->next != head) {
                temp = temp->next;
            }
            
            temp->next = nodeToInsert;
            nodeToInsert->next = head;
            return nodeToInsert;
        }
        
        while (temp->next != head && temp->next->data < data) {
            temp = temp->next;
        }

        nodeToInsert->next = temp->next;
        temp->next = nodeToInsert;
        return head;
    }
};
