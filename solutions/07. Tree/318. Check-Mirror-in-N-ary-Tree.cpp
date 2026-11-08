// ******** Given two n-ary trees, check whether they are mirror images of each other.  Given e edges, and two arrays t1[] and t2[] representing the edges of both trees. Each pair (u, v) in the arrays represents an edge from node u to node v. ********
// Note --> Both input trees are valid trees. Hence, if v is the number of nodes, then e = v-1.  The nodes are numbered from 1 to e + 1 (or v).

// <======== Example ========>
// Input: e = 2, t1[] = [1, 2, 1, 3], t2[] = [1, 3, 1, 2]
// Output: true

// Input: e = 2, t1[] = [1, 2, 1, 3], t2[] = [1, 2, 1, 3]
// Output: false


// Expected Time Complexity ==> O(n)
// Expected Auxiliary Space ==> O(n)




class Solution {
  public:
    bool checkMirrorTree(int e, vector<int>& t1, vector<int>& t2) {
        int n = t1.size();
        map<int, vector<int>> a;
        map<int, vector<int>> b;
        
        for(int i = 0; i < n; i += 2) {
            a[t1[i]].push_back(t1[i+1]);
            b[t2[i]].push_back(t2[i+1]);
        }
        
        for(auto x: a) {
            vector<int> temp = b[x.first];
            reverse(temp.begin(), temp.end());
            
            if(x.second != temp) {
                return false;
            }
        }
        
        return true;
    }
};
