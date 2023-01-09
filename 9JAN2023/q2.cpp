// 9 jan 2023 
// task 2 : sum of primes
// Time complexity : O(logN)
// Space complexity : O(1)
// Link : https://practice.geeksforgeeks.org/problems/sum-of-primes0042/1?fbclid=IwAR3tL6wRtgbA_9M8ORPwQ_uP9d7kpz6bNldaS8t7sRT_uZd0Yde9moaaAEY



#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int primeSum(int N){
        // code here
        int prime[4] = {2,3,5,7};
        int sum = 0;
        while(N > 0){
            int dig = N % 10;
            for(int i = 0 ; i < 4 ; i++){
                if(prime[i] == dig){
                    sum += dig;
                }
            }
            N/=10;
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.primeSum(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
