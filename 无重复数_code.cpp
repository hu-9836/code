//wu chong fu shu
#include<stdio.h>
int main()
{
	int a,b,c;
	int x=0;
	for(a=1;a<5;a++)
	{
		for(b=1;b<5;b++)
		{
			for(c=1;c<5;c++)
			{
				if(a!=b&&a!=c&&b!=c)
				{
					x++;
					printf("%d%d%d\n",a,b,c);
				}
			}
		}
	}
	printf("yi gong:>%d\n",x);
	return 0;
} 
