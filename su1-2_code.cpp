#include<stdio.h>
int main()
{
	int x,y;
	int a=0;
	for(x=100;x<=200;x++)
	{
		for(y=2;y<x;y++)
		{
			if(x%y==0)
			{
				break;
			}
		}
		if(x==y)
		{
			a++;
			printf("%-5d",y);
		}
	}
	printf("\na=%d",a);
	return 0;
}
