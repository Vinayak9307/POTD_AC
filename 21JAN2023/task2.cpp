class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        if(n == 0) {
            ans.push_back(0);
        }else if( n == 1){
            ans.push_back(0);
            ans.push_back(1);
        }else{
            ans.push_back(0);
            ans.push_back(1);
            n--;
            int i = 0 , j = 2;
            while(n--){
                if(i == j){
                    i = 0;
                    j *= 2;
                }
                ans.push_back(ans[ans.size() - j] + 1);
                i++;
            }

        }
        return ans;
    }
};
