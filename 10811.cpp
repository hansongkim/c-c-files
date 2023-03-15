#include <iostream>

using namespace std;

int main(void){
	int n, m;
	cin >> n >> m;
	int ball[n];
	for(int i=0; i<n; i++){
		ball[i] = i+1;
	}
	for(int i=0; i<m; i++){
		int a, b, c, temp;
		cin >> a >> b;
		c = (b - a + 1) / 2;
		for(int j=0; j<c; j++){
			temp = ball[a+j-1];
			ball[a+j-1] = ball[b-j-1];
			ball[b-j-1] = temp;
		}
	}
	for(int i=0; i<n; i++){
		cout << ball[i] << " ";
	}
	return 0;
} 
