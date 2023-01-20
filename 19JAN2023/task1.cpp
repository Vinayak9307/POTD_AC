class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char , int> um;
        for(int i = 0 ;i < s.length() ; i++){
            um[s[i]]++;
        }
        int min = INT_MAX;
        int count = 0;
        for(auto &i : um){
            if(count == 0){
                min = i.second;
                count++;
            }
            if( i.second != min) return false;
        }
        return true;
    }
};
