#include <iostream>

using namespace std;

int main(void){
	int a[10];
	for(int i=0; i<10; i++){
		cin >> a[i];
		a[i] = a[i]%42;
	}
	int count[43] = {0, };
	for(int i=0; i<10; i++){
		for(int j=0; j<42; j++){
			if(a[i] == j)count[j]+=1;
		}
	}
	int result=0;
	for(int i=0; i<42; i++){
		if(count[i]!=0) result+=1;
	}
	cout << result;
	return 0;
} 
