#include <stdio.h>
int main()
{
	int x,y,z;
	scanf("%d",&x);
	z=x;
	while(z>10)
	{
		z=z/10;
		y++;
	}
	y++;
	printf("%d\n",y);
	int a,b;
	b=x;
	while(y)
	{
		a=b%10;
		printf("%d\n",a);
		b=b/10;
		y--;
	}
	return 0;
}
