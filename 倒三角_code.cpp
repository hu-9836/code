#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[]="hello world!!!";
	char arr2[]="&&&&&&&&&&&&&&";
	int left=0;
	int right=strlen(arr1)-1;
	while(left<=right)
	{
		arr2[left]=arr1[left];
		arr2[right]=arr1[right];
		printf("%s\n",arr2);
		left++;
		right--;
		
	}
	return 0;
} 
/*
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[]="hello world!!!";
	char arr2[]="&&&&&&&&&&&&&&";
	int left=0;
	int right=strlen(arr1)-1;
	while(left<=right)
	{
		arr2[left]=arr1[left];
		arr2[right]=arr1[right];
		printf("%s\n",arr2);
		Sleep(1000);		//jian ge 1 miao 
		system("cls");		//xi tong ming ling¡ª¡ªqing kong(#include<stdlib.h>)
		left++;
		right--;
	}
	printf("%s",arr2);
	return 0;
} 

*/
