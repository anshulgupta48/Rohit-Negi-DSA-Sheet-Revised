// ******** You are given the head of a singly linked list of positive integers. You have to check if the given linked list is palindrome or not. ********

// <======== Example ========>
// Input: 1->2->1->1->2->1->NULL
// Output: true

// Input: 10->20->30->40->50->NULL
// Output: false


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(1)




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
    
    Node* reverseLinkedList(Node* head) {
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while(curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
    
    bool isPalindrome(Node *head) {
        Node* middle = getMiddleNode(head);
        Node* rev = reverseLinkedList(middle->next);
        Node* temp1 = head;
        Node* temp2 = rev;
        
        while(temp2 != NULL) {
            if(temp1->data != temp2->data) {
                return false;
            }
            
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        return true;
    }
};
