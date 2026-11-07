// ******** Given a Linked List, construct complete binary tree from the given Linked List and return the root of the tree. The result will be judged by printing the level order traversal of the binary tree. ********
// Note --> The complete binary tree is represented as a linked list in a way where if the root node is stored at position i, its left, and right children are stored at position 2*i+1, and 2*i+2 respectively. H is the height of the tree and this space is used implicitly for the recursion stack.

// <======== Example ========>
// Input: head[] = [1, 2, 3, 4, 5]
// Output: [1, 2, 3, 4, 5]

// Input: head[] = [5, 4, 3, 2, 1]
// Output: [5, 4, 3, 2, 1]


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    Node *linkedListToBinaryTree(NodeLL *head) {
        queue<Node*> q;
        Node* root = NULL;
        
        if(head != NULL) {
            root = new Node(head->data);
            root->left = NULL;
            root->right = NULL;
            q.push(root);
        }
        
        while(!q.empty() && head->next) {
            Node* temp = q.front();
            q.pop();
            
            if(head->next != NULL) {
                head = head->next;
                Node* leftNode = new Node(head->data);
                leftNode->left = NULL;
                leftNode->right = NULL;
                temp->left = leftNode;
                q.push(leftNode);
            }
            
            if(head->next != NULL) {
                head = head->next;
                Node* rightNode = new Node(head->data);
                rightNode->left = NULL;
                rightNode->right = NULL;
                temp->right = rightNode;
                q.push(rightNode);
            }
        }
        
        return root;
    }
};
