#include <iostream>

using namespace std;

int main(void){
	int king, queen, rook, bishop, knight, pon; 
	//각각 1,	1,		2,		2,		2,	8개씩 
	cin >>  king >> queen >> rook >> bishop >> knight >> pon;
	king = 1 - king;
	queen = 1 - queen;
	rook = 2 - rook;
	bishop = 2 - bishop;
	knight = 2 - knight;
	pon = 8 - pon;
	
	cout << king << " " << queen << " " << rook << " " << bishop << " " << knight << " " << pon;
	
	return 0;
}
