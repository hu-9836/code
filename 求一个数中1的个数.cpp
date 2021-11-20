#include <stdio.h>
int fac(unsigned int x)
{
	int y=0;
	while(x)
	{
		if(x%2==1)
		{
			y++;
		}
		x=x/2;
	}
	return y;
 } 
 /*
int fac(unsigned int x)
{
	int y=0,a;
	for(a=0;a<32;a++)
	{
		if(((x>>a)&1)==1)
			y++;
	}
	return y;
 }
 */
int main()
{
	int x,y=0;
	scanf("%d",&x);
	y=fac(x);
	printf("y=%d\n",y);
	return 0;
}
