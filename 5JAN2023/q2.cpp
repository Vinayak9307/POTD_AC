//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


int convertFive(int n){
    int num = n;
    int addn = 0;
    int dig = 0;
    while(num > 0){
        if(num % 10 == 0){
            addn = addn + 5*pow(10,dig);
        }
        dig++;
        num/=10;
    }
    return n + addn;
}
/*you are required to complete this method*/
int convertFive2(int n) {
    // Your code here
    string s = to_string(n);
    for(int i = 0 ; i < s.length() ; ++i){
        if(s[i] == '0'){
            s[i] = '5';
        }
    }
    return stoi(s);
}
