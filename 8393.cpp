#include <iostream>

using namespace std;

int main(void){
	int num;
	int result = 0;
	cin >> num;
	for(int i=1; i<num+1; i++){
		result += i;
	}
	cout << result;
	return 0;
} 
