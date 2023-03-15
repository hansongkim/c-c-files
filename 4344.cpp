#include <iostream>

using namespace std;

int main(void){
	int num;
	cin >> num;
	for(int i=0; i<num; i++){
		int students;
		cin >> students;
		int a[students] = {0, }, total=0;
		double mean=0.0;
		for(int j=0; j<students; j++){
			cin >> a[j];
			total += a[j];
		}
		mean = total / (double)students;
		int number=0;
		for(int j=0; j<students; j++){
			if((double)a[j]>mean) number+=1;
		}
		double result = (double)number / (double)students * 100.0;
		printf("%.3f%\n", result);
	}
	return 0;
} 
