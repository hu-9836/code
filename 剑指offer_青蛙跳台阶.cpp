#include<stdio.h> 
int ts(int a)
{
	if(a<3)
		return a;
	else
		return ts(a-1)+ts(a-2);
}
int main()
{
	int x;
	int ret;
	scanf("%d",&x);
	ret=ts(x);
	printf("tiaofa:>%d\n",ret); 
	return 0;
}
