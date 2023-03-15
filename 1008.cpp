#include <iostream>

using namespace std;

int main(void){
	int a, b;
	cin >> a >> b;
	long double c;
	
	c = (long double)a / (long double)b;
	cout << fixed;		//소수점 고정 
	cout.precision(9);	//소수점 9번째 자리까지 출력 
	cout << c;
	
	return 0;
}
