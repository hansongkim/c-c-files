#include <iostream>

using namespace std;

int main(void){
	int a[31]={0, }, num;
	for(int i=1; i<29; i++){
		cin >> num;
		a[num]=1;
	}
	for(int i=1; i<31; i++){
		if(a[i]==0) cout << i << "\n";
	}
	return 0;
} 
