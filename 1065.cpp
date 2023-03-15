#include <iostream>

using namespace std;

int main(void){
	int num, total=0; 
	cin >> num;
	if(num==1000) num=999;
	if(num<100) total=num;
	else{
		for(int i=100; i<=num; i++){
			int a[3];
			int b=i;
			int j=0;
			while(b!=0){
				a[j] = b%10;
				j++;
				b = b/10;
			}
			if(a[0]-a[1] == a[1]-a[2])total+=1;
		}
		total+=99;
	}
	cout << total;
	return 0;
} 
