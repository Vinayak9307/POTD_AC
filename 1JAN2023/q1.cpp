#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter number of rows : "<<endl;
	cin >> n;
	for(int i = 0 ; i < n ; ++i){
		for(int k = 0 ; k < n - i - 1 ; ++k){
			cout<<" ";
		}
		for(int j = 0 ; j <= i ; ++j){
			cout<<"* ";
		}
		cout<<endl;
	}
}
