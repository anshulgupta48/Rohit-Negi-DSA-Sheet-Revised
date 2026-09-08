// ******** Given a Matrix mat of n*n size. Your task is to construct a 2D linked list representation of the given matrix. Every node of the constructed linked list should have two pointers, right and down. Your function need to return pointer or reference to the linked list node corresponding to mat[0][0]. ********

// <======== Example ========>
// Input: mat[][] = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
// Output: 1->2->3->NULL, 4->5->6->NULL, 7->8->9->NULL

// Input: mat[][] = [[23, 28], [23, 28]]
// Output: 23->28->NULL, 23->28->NULL


// Expected Time Complexity ==> O(n2)
// Expected Auxiliary Space ==> O(n2)




class Solution{
    public:
    Node* linkMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        vector<vector<Node*>> ans(n, vector<Node*>(n, NULL));
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                ans[i][j] = new Node(mat[i][j]);
            }
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i < n-1) {
                    ans[i][j]->down = ans[i+1][j];
                }
                
                if(j < n-1) {
                    ans[i][j]->right = ans[i][j+1];
                }
            }
        }
        
        return ans[0][0];
    }
};
