#include<stdio.h>
int jc(int a)
{
	int b;
	int c=1;
	for(b=1;b<=a;b++)
	{
		c*=b;
	}
	return c;
}
/*		di gui
int jc(int a)
{
	if(a<=1)
		return 1;
	else
		return a*jc(a-1);
}
*/
int main()
{
	int x,ret;
	scanf("%d",&x);
	ret=jc(x);
	printf("%d\n",ret);
	
	return 0;
}
