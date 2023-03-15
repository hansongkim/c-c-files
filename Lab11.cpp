#include <cstdio>

int main(){
	int a;
	char b;
	scanf("%d %c", &a, &b);
	int c[100];
	int e[100];
	int i=0, z=0;
	char x = '%';
	while(scanf("%d", &c[i])==1){
	i++;
}
	if( b == '+' ){
		for(int d=0; d<i; d++){
			e[d] = a + c[d];
		}
	}
	else if( b == '-' ){
		for(int f=0; f<i; f++){
			e[f] = a - c[f];
		}
	}
	else if( b == '*' ){
		for(int h=0; h<i; h++){
			e[h] = a * c[h];
		}
	}
	else if( b == '/' )
	{
		int m;
		for(m=0; m<i; m++){
			if(c[m]==0){
			z=1;
			break;
			}
			else
			e[m] = a / c[m];
		}
	}
	else if( b == '%' ){
		int o;
		for(o=0; o<i; o++){
			if(c[o]==0){
			z=2;
			break;
			}
			else
			e[o] = a % c[o];
		}
	}
	if(z==0){
		for(int q=0; q<i; q++){
			printf("%d ", e[q]);
		}
	}
	else if(z==1)
	printf("error in /");
	else if(z==2)
	printf("error in %c", x);
	return 0;
}
