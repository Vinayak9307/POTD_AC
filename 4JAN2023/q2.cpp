class Solution {
public:
    void rotate(vector<vector<int>>& A) {
        int n = A[0].size();
        for(int i = 0 ; i < n ; ++i){
            for(int j = i+1 ; j < n ; ++j){
                swap(A[i][j] , A[j][i]);
            }
        }
        for(int i = 0 ; i < n ; ++i){
            reverse(A[i].begin() , A[i].end());
        }
    }
};
