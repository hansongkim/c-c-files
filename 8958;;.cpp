#include<stdio.h>
int main(void)
{
	int t;
	char a[80];
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
		int s=0,c=1,z=0;
		scanf("%s", a);
		while(a[z]!='\0')
		{
			if(a[z]=='O')
				s+=c++;
			else
				c=1;
			z++;
		}
		printf("%d\n",s);
	}
}

