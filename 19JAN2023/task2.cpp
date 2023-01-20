class Solution {
public:
    string sortString(string s) {
        string r;
	vector<int> v (26,0);
	
	for(int i = 0; i < s.size(); i++){
			v[s[i] - 'a']++;
	}
	
	while( s.size() > r.size()){		
	for(int i = 0; i < 26; ++i){
		if(v[i] > 0){
			r.push_back('a' + i);
			v[i]--;
		}
	}
	for(int i = 25; i >= 0; --i){
		if(v[i] > 0){
			r.push_back('a' + i);
			v[i]--;
		}
	}	
	}
	return r;
}
};
