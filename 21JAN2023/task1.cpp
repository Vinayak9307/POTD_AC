class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        stringstream neww;
        for(int i = 0; i < s.length() ; i++){
            if((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= '9' && s[i] >= '0'))
                neww << s[i];
        }
        string a = neww.str();
        int n = a.length();
        for(int i = 0 , j = n-1 ; i < n && j >= 0; i++ , j--){
            if(a[i] != a[j]){
                return false;
            }
        }
        return true;
    }
};
