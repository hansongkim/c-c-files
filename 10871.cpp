#include <iostream>

using namespace std;

int main(void){
	int num, compare;
	cin >> num >> compare;
	int a[num];
	for(int i=0; i<num; i++){
		cin >> a[i];
	}
	for(int i=0; i<num; i++){
		if(a[i]<compare) cout << a[i] << " ";
	}
	return 0;
} 
