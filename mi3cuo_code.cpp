#include<stdio.h>
#include<string.h>
int main() 
{
	int x;
	char password[16]={0};
	for(x=1;x<4;x++)
	{
		printf("mi-ma:>");
		scanf("%s",password);
		if(strcmp(password,"111111")==0)
		{
		printf("zheng que\n");
		break;
		}
		else
		{
			printf("cuo!!!\n");
		} 
	}
	if(x==4)
	{
		printf("tui chu!!!\n");
	}
	return 0;
}
