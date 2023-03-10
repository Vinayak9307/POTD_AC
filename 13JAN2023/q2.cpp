class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin() , costs.end());
        int sum = 0,i;
        for(i = 0 ; i < costs.size() ; i++){
            sum += costs[i];
            if(sum > coins) return i;
        }
        return costs.size();
    }
};
