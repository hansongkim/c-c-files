#include <iostream>

using namespace std;

int main(void){
	int a, b, one, ten, hundred;
	cin >> a;
	cin >> b;
	one = b%10;
	ten = (b/10)%10;
	hundred = b/100;
	cout << a*one << endl;
	cout << a*ten << endl;
	cout << a*hundred << endl;
	cout << a*b;
	return 0;
} 
