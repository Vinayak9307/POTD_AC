class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        vector<int> v;
        v.push_back(0);
        for(int i = 0 ; i < blocks.length() ; i++){
            if(blocks[i] == 'W'){
                v.push_back(0);
            }else{
                v.push_back(1);
            }
        }
        int n = v.size();
        for(int i = 1 ; i < n ;i++){
            v[i] = v[i - 1] + v[i];
        }
        int maxi = -1 ;
        for(int i = n - 1; i >= k ; i--){
            int s = v[i] - v[i - k];
            if(s > maxi){
                maxi = s;
            }
        }
        return max(k-maxi , 0);
    }
};
