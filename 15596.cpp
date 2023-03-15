#include <iostream>

using namespace std;

long long sum(int *a, int n){
	int result=0;
	for(int i=0; i<n; i++){
		result += a[i];
	}
	return result;
}

int main(void){
	int num;
	cin >> num;
	int a[num];
	for(int i=0; i<num; i++){
		cin >> a[i];
	}
	cout << sum(a, num);
	return 0;
} 
