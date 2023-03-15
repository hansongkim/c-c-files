#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

long long total;
bool col[16], d1[16], d2[16], reserved[8][8];

void search(long long r){
   if(r==8){
      total ++;
      return;
   }
   for(long long c=0; c<8; c++){
      if(col[c] || d1[r+c] || d2[r-c+7] || reserved[r][c]) continue;
      
      col[c] = d1[r+c] = d2[r-c+7] = true;
      search(r+1);
      col[c] = d1[r+c] = d2[r-c+7] = false;
   }
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin.tie(0);
    for(int i=0; i<16; ++i){
       col[i] = d1[i]=d2[i]=false;
   }
   string x;
   for(int j=0; j<8; j++){
      cin >> x;
      for(int k=0; k<8; k++){
         reserved[j][k] = x[k] != '.';
      }
   }
   search(0);
   cout << total;
	return 0;
}
