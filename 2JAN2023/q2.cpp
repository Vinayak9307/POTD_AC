//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	bool check(char c){
	    string vowel = "aeiouAEIOU";    
	    for(int i = 0 ; i < vowel.length() ; ++i){
	        if(c == vowel[i]) return false;
	    }
	    return true;
	}
	
	string removeVowels(string S) 
	{
	    // Your code goes here
	    string str;
	    for(int i = 0 ; i < S.length() ; ++i){
	        if(check(S[i])){
	            str.push_back(S[i]);
	        }
	    }
	    return str;
	}
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s, ch; 

	    getline(cin, s);  
   		
       
   		Solution ob;
   		cout << ob.removeVowels(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends
