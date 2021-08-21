#include<stdio.h>
#include<math.h>
int main()
{
	int x,y;
	int a=0;
	for(x=100;x<=200;x++)
	{
		for(y=2;y<=sqrt(x);y++)
		{
			if(x%y==0)
			{
				break;
			}
		}
		if(y>sqrt(x))
		{
			a++;
			printf("%-5d",x);
		}
	}
	printf("\na=%d",a);
	return 0;
}
