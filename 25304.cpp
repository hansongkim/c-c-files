#include <iostream>

using namespace std;

int main(void){
	int sum, num, a, b;
	int result = 0;
	cin >> sum >> num;
	for(int i=0; i<num; i++){
		cin >> a >> b;
		result += a * b;
	}
	if(result == sum) cout << "Yes";
	else cout << "No";
	return 0;
} 
