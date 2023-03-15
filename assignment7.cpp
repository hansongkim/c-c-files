#include <cstdio>

int main(){
	int i=0;
	char a[i][10];
	while(scanf(("%s",&a[i][10])==1)){
		i++;
	}
	int count=0, c=0;
	for(int j=0;j<=i;j++){
		c=count;
		for(int k=0;k<10;k++){
			if(a[j][k]==1)
			count+=1;
		}
		if(c<count){
		c=count;}
		count=0;
	}
	printf("%d %d",c,count);
	return 0; 
}
