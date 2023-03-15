#include <iostream>

using namespace std;

int main(void){
	int num, count=0, oldnum;
	cin >> num;
	oldnum = num;
	if(num<10)num*10;
	while(true){
		int a,b,result;
		a = num/10;
		b = num%10;
		result = a+b;
		result = result%10;
		count += 1;
		num = b*10 + result;
		if(num == oldnum) break;
	}
	cout << count;
	return 0;
} 
