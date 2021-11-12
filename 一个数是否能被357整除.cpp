#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x%3==0&&x%5==0&&x%7==0) 
		printf("%d能同时被3，5，7整除");
	else if(x%3==0&&x%5==0)
		printf("%d能同时被3，5整除");
	else if(x%3==0&&x%7==0)
		printf("%d能同时被3，7整除");
	else if(x%7==0&&x%5==0)
		printf("%d能同时被5，7整除");
	else
		printf("%d不能被3，5，7任一整除\n",x);
	return 0;
}
