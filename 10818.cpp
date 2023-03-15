#include <iostream>

using namespace std;

int main(void){
	int num;
	cin >> num;
	int a[num];
	int min=1000000, max=-1000000;
	for(int i=0; i<num; i++){
		cin >> a[i];
		if(a[i]<min) min=a[i];
		if(a[i]>max) max=a[i];
	}
	cout << min << " " << max;
	return 0;
} 
