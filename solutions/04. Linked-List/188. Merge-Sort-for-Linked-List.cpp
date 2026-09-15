// ******** Given the head of a singly linked list, sort the linked list in non-decreasing order using the Merge Sort algorithm and return the head of the sorted list. ********

// <======== Example ========>
// Input: 9->5->2->8->NULL
// Output: 2 -> 5 -> 8 -> 9

// Input: 40->20->60->10->50->30->NULL
// Output: 10 -> 20 -> 30 -> 40 -> 50 -> 60


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(n)




class Solution{
    public:
    Node* getMiddleNode(Node* head) {
        Node* slowPtr = head;
        Node* fastPtr = head->next;
        
        while(fastPtr != NULL && fastPtr->next != NULL) {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }
        
        return slowPtr;
    }
    
    Node* mergeLists(Node* start, Node* end) {
        Node* ans = new Node(-1);
        Node* temp = ans;
        
        while(start != NULL && end != NULL) {
            if(start->data < end->data) {
                temp->next = start;
                start = start->next;
            } else {
                temp->next = end;
                end = end->next;
            }
            
            temp = temp->next;
        }
        
        while(start != NULL) {
            temp->next = start;
            start = start->next;
            temp = temp->next;
        }
        
        while(end != NULL) {
            temp->next = end;
            end = end->next;
            temp = temp->next;
        }
        
        return ans->next;
    }
    
    Node* mergeSort(Node* head) {
        if(head == NULL || head->next == NULL) {
            return head;
        }
        
        Node* mid = getMiddleNode(head);
        Node* start = head;
        Node* end = mid->next;
        mid->next = NULL;
        
        start = mergeSort(start);
        end = mergeSort(end);
        return mergeLists(start, end);
    }
};
