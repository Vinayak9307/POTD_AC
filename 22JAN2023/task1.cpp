class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char , char> u1;
        unordered_map<char , char> u2;

        for(int i = 0 ; i < s.length() ;i++){
            if(u1.find(s[i]) != u1.end() && u1[s[i]] != t[i]){
                return false;
            }
            u1[s[i]] = t[i];
        }
        for(int i = 0 ; i < t.length() ;i++){
            if(u2.find(t[i]) != u2.end() && u2[t[i]] != s[i]){
                return false;
            }
            u2[t[i]] = s[i];
        }
        return true;

    }
};
