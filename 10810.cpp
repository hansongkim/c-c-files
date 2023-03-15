#include <iostream>

using namespace std;

int main(void){
	int n, m;
	cin >> n >> m;
	int ball[n] = {0, };
	for(int i=0; i<m; i++){
		int a,b,c;
		cin >> a >> b >> c;
		for(int j=a; j<=b; j++){
			ball[j-1] = c;
		}
	}
	for(int i=0; i<n; i++){
		cout << ball[i] << " ";
	}
	return 0;
} 
