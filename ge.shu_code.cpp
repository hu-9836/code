#include<stdio.h>
int main()
{
	int a,x;
	x=0;
	for(a=1;a<=100;a++)
	{
		if(a%10==9)
			x++;
		if(a/10==9)
			x++;
		
	}
	printf("x=%d",x);
	return 0;
}
