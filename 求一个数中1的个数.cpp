#include <stdio.h>
int main()
{
	int x,y=0;
	scanf("%d",&x);
	while(x!=0)
	{
		if(x%2==1)
		{
			y++;
		}
		x=x/2;
	} 
	printf("y=%d\n",y);
	return 0;
}
