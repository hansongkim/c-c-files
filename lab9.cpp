#include <cstdio>
#define _USE_MATH_DEFINES
#include <math.h>

int main(){
	int a;
	double d=0.0;
	double t=sqrt(3.0);
	scanf("%d\n", &a);
	char b[a];
	double c[a], f[a];
	for(int i=0; i<a; i++){
	scanf("%c", &b[i]);
	if(b[i]=='R'){
		scanf(" %lf %lf\n", &c[i], &f[i]);
		d += c[i] * f[i];
	}	
	else if(b[i]=='C'){
	scanf(" %lf\n", &c[i]);
	d += M_PI * pow(c[i], 2);
}
	else{
	scanf(" %lf\n", &c[i]);
	d += pow(c[i], 2) * t / 4;
	}
}
	printf("%.2f", d);
	return 0;
}
