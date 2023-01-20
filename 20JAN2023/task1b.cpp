#include <bits/stdc++.h>
using namespace std;



typedef long long ll;
typedef unsigned long long ull;

const int M = 5000;
vector<int> isPrime(M,1) , lp(M) , hp(M);
vector<int> prime;
// vector<ll> bin(M,0);
// ll ncr[1005][1005];
// ll mod = 1e9 + 7 ;

#define YES {cout<<"YES"<<endl;}
#define NO {cout<<"NO"<<endl;}

void _print(int a) {cerr<<a;}
void _print(ll a) {cerr<<a;}
void _print(char a) {cerr<<a;}
void _print(string a) {cerr<<a;}
void _print(double a) {cerr<<a;}

template<class T> void _print(vector<T> v){ cerr<<"[ "; for(T x : v) cerr<<x<<" "; cerr<<"]";}
template<class T> void _print(set<T> v){ cerr<<"[ "; for(T x : v) cerr<<x<<" "; cerr<<"]";}
template<class T> void _print(multiset<T> v){ cerr<<"[ "; for(T x : v) cerr<<x<<" "; cerr<<"]";}
template<class T> void _print(T a[] , int size){cerr<<"[ "; for(int i = 0 ; i < size ;++i) cerr<<a[i]<<" "; cerr<<"]"; }
template<class T> void _print(stack<T> v){ cerr<<"[ "; for(int i = 0 ; i < v.size() ; ++i) { cerr<<v.top()<<" "; v.pop() ; } cerr<<"]";}


#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" "; _print(x); cerr<<endl;
#else
#define debug(x)
#endif

void sieve(){
	isPrime[0] = isPrime[1] = 0;
	for(int i = 2 ; i < M ; ++i){
		if(isPrime[i] == 1){
			prime.push_back(i);
			for(int j = 2*i ; j < M ; j += i){
				isPrime[j] = 0;
			}
		}
	}
}
// void calcNCR(int n){
// 	for(int i = 0 ; i <= n ; i++){
// 		for(int j = 0 ; j <= i ; j++){
// 			if(j == i || j == 0){
// 				ncr[i][j] = 1;
// 			}else{
// 				ncr[i][j] = (ncr[i-1][j-1] + ncr[i-1][j])%mod;
// 			}
// 		}
// 	}
// }
// int mceil(long n){
// 	if(n%2 == 1){
// 		return n/2 + 1;
// 	}else{
// 		return n/2;
// 	}
// }
int nDigit(ll num){
	int dig = 0;
	while(num >= 2){
		num /= 2;
		dig++;
	}
	return dig;
}
ll powa( ll a , ll b){
	ll prod = 1;
	for(int i = 0 ; i < b ; i++) prod *= a;
	return prod;
}
void solve(void);
void solvea(void);

int main(){

	#ifndef ONLINE_JUDGE
	freopen("Error.txt" , "w" , stderr);
	#endif
	ios::sync_with_stdio(false);
	sieve();
	int t;
	// cin >> t;
	t = 1;
	while(t--){
		solve();
	}
	return 0;
}
vector<int> bina(ll n){
	vector<int> v;
	for(int i=0; n>0; i++)    
	{    
		v.push_back(n%2);    
		n= n/2;  
	}
	int size = v.size();
	for(int i = 0 ; i < 31 - size ; i++) v.push_back(0);
		debug(v);
	return v;
}

void solve(){
	ll n,k;
	cin >> n >>k;
	int count = 0;
	for(int i = 0 ; i < prime.size()-1 ; i++){
		if((prime[i] + prime[i+1] + 1) <= n && isPrime[prime[i] + prime[i+1] + 1]){
			count++;
		}
	}
	if(count < k){
		NO
	}else{
		YES
	}
	
}
