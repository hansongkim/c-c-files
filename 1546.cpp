#include <iostream>

using namespace std;

int main(void){
	int num;
	cin >> num;
	double a[num];
	int max=0;
	for(int i=0; i<num; i++){
		cin >> a[i];
		if(a[i]>max) max=a[i];
	}
	double mean=0.0;
	for(int i=0; i<num; i++){
		a[i] = a[i] / (double)max * 100.0;
		mean += a[i];
	}
	printf("%.3f", mean/num);
	return 0;
} 
