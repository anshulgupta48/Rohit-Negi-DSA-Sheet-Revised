// ******** Given a linked list, replace all the values with the nearest prime number. If more than one prime number exists at an equal distance, choose the smallest one. Return the head of the modified linked list. ********

// <======== Example ========>
// Input: head[] = [2, 6, 10]
// Output: [2, 5, 11]

// Input: head[] = [1, 15, 20]
// Output: [2, 13, 19]


// Expected Time Complexity ==> O(n*logn)
// Expected Auxiliary Space ==> O(1)




class Solution{
    public:
    bool isPrime(int num) {
        if(num <= 1) {
            return false;
        }

        for(int i = 2; i*i <= num; i++) {
            if((num % i) == 0) {
                return false;
            }
        }
       
        return true;
    }
    
    int prevPrime(int num) {
        for(int i = num-1; i >= 2; i--) {
            if(isPrime(i)) {
                return i;
            }
        }
        
        return -1;
    }
    
    int nextPrime(int num) {
        for(int i = num+1; ; i++) {
            if(isPrime(i)) {
                return i;
            }
        }
        
        return -1;
    }
    
    Node *primeList(Node *head) {
        Node* temp = head;
        
        while(temp != NULL) {
            if(!isPrime(temp->data)) {
                int prevPrimeValue = prevPrime(temp->data);
                int nextPrimeValue = nextPrime(temp->data);
                
                if(prevPrimeValue == -1) {
                    temp->data = nextPrimeValue;
                }
                else if(temp->data-prevPrimeValue <= nextPrimeValue-temp->data) {
                    temp->data = prevPrimeValue;
                }
                else {
                    temp->data = nextPrimeValue;
                }
            }
            
            temp = temp->next;
        }
        
        return head;
    }
};
