#include <iostream>

using namespace std;

int main(void){
	int a[9];
	int max=-1000000, maxnum;
	for(int i=0; i<9; i++){
		cin >> a[i];
		if(a[i]>max){
			max=a[i];
			maxnum = i+1;
		}
	}
	cout << max << "\n" << maxnum;
	return 0;
} 
