#include <cstdio>

int main(void){
	int n;
	scanf("%d", &n);
	int a[n][n]= {0,};
	int input=1;
	int count=0;
	int c[n];
	for(int i=0; i<n; i++){
		count=0;
		for(int j=0;j<n;j++){
			scanf("%d", &input);
			if(input==0){
				a[i][j]=0;
				c[i]=count-1;
				break;
			}
			else {
				count++;
				a[i][j]=input;
			}
		}
	}
	printf("\n");
	for(int i=0; i<n; i++){
		for(int j=0;j<n;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0; i<n; i++) printf("%d ", c[i]);
	int g[n][n]= {0,};
	for(int i=0; i<n; i++){
		g[i][i]=0;
		for(int j=1;j<n;j++){
			int n2=a[i][j];
			if(n2==0) break;
			else
			g[i][n2-1]=c[i];
		}
	}
	printf("\n");
	printf("\n");
	
	
	for(int i=0; i<n; i++){
		for(int j=0;j<n;j++){
			printf("%d ", g[i][j]);
		}
		printf("\n");
	}
}

