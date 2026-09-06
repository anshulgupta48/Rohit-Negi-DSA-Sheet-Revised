// ******** Given two linked lists head1 and head2, find the intersection of two linked lists. Each of the two linked lists contains distinct node values. ********
// Note --> The order of nodes in this list should be the same as the order in which those particular nodes appear in input head1 and return null if no common element is present.

// <======== Example ========>
// Input: head1: 9->6->4->2->3->8 , head2: 1->2->8->6
// Output: 6->2->8

// Input: head1: 5->3->1->13->14 , head2: 3->13
// Output: 3->13


// Expected Time Complexity ==> O(n+m)
// Expected Auxiliary Space ==> O(n+m)




class Solution{
    public:
    Node* findIntersection(Node* head1, Node* head2) {
        Node* temp1 = head1;
        Node* temp2 = head2;
        Node* head = NULL;
        Node* tail = NULL;
        set<int> st;
        
        while(temp2 != NULL) {
            st.insert(temp2->data);
            temp2 = temp2->next;
        }
        
        while(temp1 != NULL) {
            if(st.find(temp1->data) != st.end()) {
                Node* nodeToInsert = new Node(temp1->data);
                
                if(head == NULL) {
                    head = nodeToInsert;
                    tail = nodeToInsert;
                } else {
                    tail->next = nodeToInsert;
                    tail = nodeToInsert;
                }
            }
            
            temp1 = temp1->next;
        }
        
        return head;
    }
};
