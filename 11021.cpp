#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int num, a, b;
	cin >> num;
	int result[num];
	for(int i=0; i<num; i++){
		cin >> a >> b;
		result[i] = a + b;
	}
	for(int i=1; i<num+1; i++){
		cout << "Case #" << i << ": " << result[i-1] << "\n";
	}
	return 0;
} 
