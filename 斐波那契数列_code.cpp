#include<stdio.h>
int fbn(int a)
{
	if(a<=2)
		return 1;
	else
		return fbn(a-1)+fbn(a-2);
}
/*
int fbn(int a)
{
	int x=1;
	int y=1;
	int ret;
	while(a>2)
	{
		ret=x+y;
		x=y;
		y=ret;
		a--;
	}
}
*/
int main()
{
	int x,ret;
	scanf("%d",&x);
	ret=fbn(x);
	printf("%d\n",ret);
	
	return 0;
}
