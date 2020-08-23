#include <bits/stdc++.h>
using namespace std;
 
int main(){
	long long t;
	cin>>t;
	while(t--) {
		string a;
		cin >> a;
		long long tong = 0;
		for(long long i = 0; i < a.size(); i++){
			tong += a[i] - '0';
		}
		while(tong >= 10) {
			tong = tong / 10 + tong % 10;	
		}
		cout << tong <<endl;
	}
    return 0;
}