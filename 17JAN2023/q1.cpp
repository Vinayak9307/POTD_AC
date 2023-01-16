class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = -1;
        for(string s: sentences){
            int count = 0;
            for(int i = 0 ; i < s.length() ; ++i){
                if(s[i]==' '){
                    count++;
                }
            }
            if(count > max){
                max = count;
            }
        }
        return max+1;
    }
};
