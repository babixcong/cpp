#include <bits/stdc++.h>
using namespace std;
 
int main(){
	long long m,s;
	cin >> m >> s;
	if(m == 1 && s == 0) {
		cout << "0 0";
		return 0;
	}
	if(s == 0 || s > 9 * m) {
		cout << "-1 -1";
		return 0;
	}
	long long max[m+1];
	long long min[m+1];
	for(long long i = 0 ;i < m; i++) {
		if (s >= 10) {
			max[i] = 9;
			s -= 9;
		} else {
			max[i] = s;
			s = 0;
		}
	}
	for(long long i = 0; i < m; i++) {
        min[i] = max[i];
	}
	if(min[m-1] == 0) {
		min[m-1] = 1;
		for(long long i = m-2; i >= 0; i--) {
			if(min[i] != 0) {
				min[i] -= 1;
				break;
			}
		}
	}
	for(long long i=m-1;i>=0;i--)	cout << min[i];
	cout<<" ";
	for(long long i=0;i<m;i++)	cout << max[i];

    return 0;
}