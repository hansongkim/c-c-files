#include <iostream>

using namespace std;

int main(void){
	int si, bun, time;
	cin >> si >> bun;
	cin >> time;
	bun += time;
	while(bun >= 60){
		bun -= 60;
		si += 1;
	}
	if(si >= 24){
		si -= 24;
	}
	cout << si << " " << bun;
	return 0;
} 
