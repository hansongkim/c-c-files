#include <iostream>

using namespace std;

int main(void){
	int num;
	cin >> num;
	int a[num], count=0;
	for(int i=0; i<num; i++){
		cin >> a[i];
	}
	int find;
	cin >> find;
	for(int i=0; i<num; i++){
		if(a[i]==find) count+=1;
	}
	cout << count;
	return 0;
} 
