#include <iostream>

using namespace std;

int main(void){
	int num, a, b;
	cin >> num;
	int result[num];
	for(int i=0; i<num; i++){
		cin >> a >> b;
		result[i] = a + b;
	}
	for(int i=0; i<num; i++){
		cout << result[i] << endl;
	}
	return 0;
} 
