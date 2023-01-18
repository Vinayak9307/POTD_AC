class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int , int> m;
        for(int i : bills){
            if(i == 10 && m[5] > 0){
                m[5]--;
                m[10]++;
            }else if( i == 20 && m[5] && m[10]){
                m[5]--;
                m[10]--;
            }else if( i == 20 && m[10] <= 0 && m[5] > 2){
                m[5]-=3;
            }else if( i == 5){
                m[5]++;
            }else return false;
        }
        return true;
    }
};
