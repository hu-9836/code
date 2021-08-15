#include<stdio.h>
int main()
{
	int ret,ch;
	char password[20]={0};
	printf("shu ru mi ma:>");
	scanf("%s",password);
	
	while((ch=getchar())!='\n')
	{
		;
	} //du qu zhi qian suo you shu
	
	printf("que ren(Y/N):>") ;
	ret = getchar();
	if(ret == 'Y')
	{
		printf("que ren cheng gong\n");
	}
	else
	{
		printf("fang qi que ren\n");
	}
}
