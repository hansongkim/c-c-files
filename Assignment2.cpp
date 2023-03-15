#include <cstdio>

void move_location(int a[])
{
	int x=0, y=0;
	for(int j=0;j<10;j++){
		if(a[j]%2==0) x+=1;
		else y+=1;
	}
	printf("%d %d", x,y);
}

int main()
{
	int a[10];
	for(int i=0;i<9;i++)
	scanf("%d ", &a[i]);
	a[10]=0;
	move_location(a);
	return 0;
}
