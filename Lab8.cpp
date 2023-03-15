#include <cstdio>

int main(){
	int a, b;
	int c[100];
	int i=0;
	int x=0;
	int y=0;
	scanf("%d %d\n", &a, &b);
	while(scanf("%d", &c[i])==1){
		i++;
	}
	for(int m=0; m<i; m++){
		if (c[m]%2==0)
		x+=1;
		else
		y+=1;
	}
	printf("+");
	for(int j=0; j<a; j++){
		printf("-");
	}
	printf("+\n");
	for(int k=0; k<b; k++){
		printf("|");
		for(int n=0; n<a; n++){
			if((n==x-1)&&(k==y-1))
			printf(".");
			else
			printf(" ");
		}
		printf("|\n");
	}
	printf("+");
	for(int p=0; p<a; p++){
		printf("-");
		}
	printf("+\n");
	return 0;
}
