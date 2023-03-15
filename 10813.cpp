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
		int a, b, temp;
		cin >> a >> b;
		temp = ball[a-1];
		ball[a-1] = ball[b-1];
		ball[b-1] = temp;
	}
	for(int i=0; i<n; i++){
		cout << ball[i] << " ";
	}
	return 0;
} 
