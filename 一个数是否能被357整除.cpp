#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x%3==0&&x%5==0&&x%7==0) 
		printf("%d��ͬʱ��3��5��7����");
	else if(x%3==0&&x%5==0)
		printf("%d��ͬʱ��3��5����");
	else if(x%3==0&&x%7==0)
		printf("%d��ͬʱ��3��7����");
	else if(x%7==0&&x%5==0)
		printf("%d��ͬʱ��5��7����");
	else
		printf("%d���ܱ�3��5��7��һ����\n",x);
	return 0;
}
