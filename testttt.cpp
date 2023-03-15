#include <cstdio>
#include <string.h>

int main(){
	char string1[20];
	char string2[20];
	scanf("%s %s",string1,string2);
	int a=0, b=0;
	for(int i=0;i<14;i++){
   		if(string1[i]!=0) a+=1;
   		if(string2[i]!=0) b+=1;
   		if(string1[i]==0 && string2[i]==0) break;
   }
   char fstring[20];
   char sstring[20];
   if(a>b){
   strcpy(fstring, string1);
   strcpy(sstring, string2);
}
	else{
	strcpy(sstring, string1);
	strcpy(fstring, string2);
}
	int c=0;
	for(int k=0;sstring[k]!=0;k++){
		if(fstring[k]!=sstring[k]) c+=1;
	}
	printf("%d", c);
	return 0;
}
