#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int num;
	cin >> num;
	int a[num], b[num];
	int result[num];
	for(int i=0; i<num; i++){
		cin >> a[i] >> b[i];
		result[i] = a[i] + b[i];
	}
	for(int i=1; i<num+1; i++){
		cout << "Case #" << i << ": " << a[i-1] << " + " << b[i-1] << " = " << result[i-1] << "\n";
	}
	return 0;
} 
