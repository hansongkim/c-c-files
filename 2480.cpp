#include <iostream>

using namespace std;

int main(void){
	int a,b,c,reward,big;
	cin >> a >> b >> c;
	if(a>b)big = a;
	else big = b;
	if(c>big)big = c;
	if(a==b && a==c){
		reward = 10000 + a*1000;
	}
	else if(a==b){
		reward = 1000 + a*100;
	}
	else if(b==c){
		reward = 1000 + b*100;
	}
	else if(a==c){
		reward = 1000 + a*100;
	}
	else{
		reward = big*100;
	}
	cout << reward;
	return 0;
} 
