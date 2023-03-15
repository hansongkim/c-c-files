#include <iostream>

using namespace std;

int main(void){
	int hour, min, temp;
	cin >> hour >> min;
	if(min>=45)
	cout << hour << " " << min-45;
	else if(hour!=00){
		temp = 45-min;
		min = 60-temp;
		cout << hour-1 << " " << min;
	}
	else{
		temp = 45-min;
		min = 60-temp;
		cout << 23 << " " << min;
	}
	return 0;
} 
