#include<stdio.h>
#include<math.h>
int main()
{
	int x,a,b;
	for(x=1;x<=100000;x++)
	{
	a=sqrt(x+100);		//x+100 ping fang gen
	b=sqrt(x+168);		//x+168
	if(a*a==x+100&&b*b==x+168)		// yi ge shu de ping fang gen deng yu gai shu
		printf("shu zi wei:>%d\n",x);
	}
	return 0;
} 
