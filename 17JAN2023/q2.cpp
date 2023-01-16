//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        // Code here.
        int low = 0;
        int n = a.size();
        int high = n - 1;
        int result = -1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if((a[mid] > a[mid-1] && a[mid] > a[mid+1]) || mid == 0 || mid == n-1){
                result =  a[mid];
                break;
            }else if(a[mid] < a[mid+1]){
                low = mid + 1;
            }else if(a[mid] > a[mid+1]){
                high = mid - 1;
            }
        }
        return result;
    }
};



//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    }
	return 0;
}


// } Driver Code Ends
