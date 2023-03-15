#include <cstdio>

int main(){
	int n=0;
	int number[100000];
	int age[100000];
	char gender[100000];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d ", &number[i]);
		scanf("%d ", &age[i]);
		scanf("%c", &gender[i]);
	}
	int M_old[100000];
	int F_old[100000];
	int M_adult[100000];
	int F_adult[100000];
	int child[100000];
	int mo=0;
	int fo=0;
	int ma=0;
	int fa=0;
	int c=0;
	for(int i=0; i<n; i++){
		if(age[i]>=61){
			if(gender[i]=='M'){
				M_old[mo]=number[i];
				mo++;
				}
			else{
				F_old[fo]=number[i];
				fo++;
				}
			}
		else if(age[i]>=16){
			if(gender[i]=='M'){
				M_adult[ma]=number[i];
				ma++;
				}
			else{
				F_adult[fa]=number[i];
				fa++;
				}
			}
		else{
			child[c]=number[i];
			c++;
		}
	}
	for(int i=0;i<mo;i++){
		printf("%d\n", M_old[i]);
	}
	for(int i=0;i<fo;i++){
		printf("%d\n", F_old[i]);
	}
	for(int i=0;i<c;i++){
		printf("%d\n", child[i]);
	}
	for(int i=0;i<fa;i++){
		printf("%d\n", F_adult[i]);
	}
	for(int i=0;i<ma-1;i++){
		printf("%d\n", M_adult[i]);
	}
	printf("%d", M_adult[ma-1]);
	return 0;
}
