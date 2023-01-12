class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;  
        for(string sa : words){
            bool flag = true;
            for(int i = 0 ; i < sa.length() ; ++i){
                if(sa[i] != s[i]){
                    flag = false;
                    break;
                }
            }
            if(flag) count++;
        }
        return count;
    }
};
