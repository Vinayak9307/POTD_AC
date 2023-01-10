// 10 jan 2023 
// task 1 : Reverse words in a given string
// Time complexity : O(|S|)
// Space complexity : O(|S|)
// Link : https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1?fbclid=IwAR3jBTRGRc1HqDaYEzH8FPdfBUc-IEoX1MFMv7DgXcl4kZQdNPoX-cgjIKI

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        vector<string> str;
        string temp;
        for(int i = 0 ; i < s.length() ; ++i){
            if(s[i] == '.'){
                str.push_back(temp);
                temp = "";
                continue;
            }
            temp.push_back(s[i]);
        }
        str.push_back(temp);
        stringstream ss;
        ss << str[str.size() - 1];
        for(int i = str.size() - 2 ; i >= 0 ;i--){
            ss << "." << str[i];
        }
        return ss.str();
    }
};


//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
