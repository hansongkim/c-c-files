#include <iostream>

using namespace std;

int main(void){
	int a, b;
	cin >> a >> b;
	long double c;
	
	c = (long double)a / (long double)b;
	cout << fixed;		//�Ҽ��� ���� 
	cout.precision(9);	//�Ҽ��� 9��° �ڸ����� ��� 
	cout << c;
	
	return 0;
}
