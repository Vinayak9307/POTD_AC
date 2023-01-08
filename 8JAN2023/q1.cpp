//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int a[], int n) {
	    // code here
	    int j = n,k = 0;
	    for(int i = 0 ; i < n ; i++){
	        if(a[i] == 0){
	            j = i;
	            break;
	        }
	    }
	    for(int k = j + 1; k < n ;k++){
	        if(a[k] != 0){
	            a[j] = a[k];
	            a[k] = 0;
	            j++;
	        }
	    }
	    
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
