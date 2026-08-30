// ******** Given a linked list sorted in ascending order and an integer called key, insert data in the linked list such that the list remains sorted. ********

// <======== Example ========>
// Input: list[] = [20, 36, 47, 58, 69, 80], key = 19
// Output: [19, 20, 36, 47, 58, 69, 80]

// Input: list[] = [50, 100], key = 75
// Output: [50, 75, 100]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    Node* sortedInsert(Node* head, int key) {
        Node* temp = head;
        Node* nodeToInsert = new Node(key);
        
        if(temp->data > nodeToInsert->data) {
            nodeToInsert->next = temp;
            head = nodeToInsert;
            return head;
        }
        
        while(temp->next != NULL) {
            if(temp->next->data > nodeToInsert->data) {
                nodeToInsert->next = temp->next;
                temp->next = nodeToInsert;
                return head;
            }
            temp = temp->next;
        }
        
        temp->next = nodeToInsert;
        return head;
    }
};
