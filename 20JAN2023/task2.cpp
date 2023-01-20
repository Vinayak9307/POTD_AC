#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+ 10;

long long a[N] , fArr[N] , bArr[N];

int main(){
	int t,n,q;
	cin >> t;
	while(t--){

	cin>> n >>q;
	fArr[0] = bArr[n+1] = 0;

	for(int i = 1 ; i <= n ; ++i){
		cin >> a[i];
		
	}
	for(int i = 1 ; i <= n ; ++i){
		fArr[i] = __gcd(fArr[i-1] , a[i]);
		bArr[n-i+1] = __gcd(bArr[n-i+2],a[n+1-i]);
	}
	while(q--){
		int l , r;
		cin>>l>>r;
		cout<<__gcd(fArr[l-1] , bArr[r+1])<<endl;
	}
}
	return 0;
}
