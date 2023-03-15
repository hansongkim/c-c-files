#include <iostream>

using namespace std;

long long self(void){
	int num, sum;
	bool a[20000] = {false, };
	for(int i=1; i<10001; i++){
		num=i;
		sum=i;
		while(num!=0){
			sum = sum + num%10;
			num = num/10;
		}
		a[sum]=true;
	}
	for(int i=1; i<10001; i++){
		if(a[i]==false) printf("%d\n", i);
	}
}

int main(void){
	self();
	return 0;
} 
