#include<stdio.h>
int main(void)
{
	int i,j,result;//i=hang j=lie 
	for(i=1;i<10;i++)
	{
		for(j=1;j<10;j++)
		{
			result=i*j;
			printf("%d*%d=%-3d\t",i,j,result); //%-3d zuo dui qi,zhan san wei
		}
	printf("\n");//mei ci huan hang 
	}
	return 0;
}
/*
shang san jiao
#include<stdio.h>
int main()
{
	int i,j;
	int result=i*j;
	for(i=1;i<10;i++)
	{
		for(j=1;j<10;j++)
		{
			if(j<i)
				printf("        ");//8kong
			else
				printf("%d*%d=%-3d\t",i,j,result);
		}
	printf("\n");//mei ci huan hang 
	}
}
*/

/*
xia san jiao
#include<stdio.h>
int main()
{
	int i,j,n;
	for(i=1;i<10;i++)
	{
		for(n=1;n<=9-i;n++)
			printf("        ");
		for(j=1;j<=i;j++)
			printf("%d*%d=%-3d\t",i,j,i*j);
	printf("\n");//mei ci huan hang 
	}
}
*/
