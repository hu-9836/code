#include<stdio.h>
int my_strlen(char* str)
{
	int count =0;
	while(*str!='\0')
	{
		count++;
		str++; 
	}
	return count;
}
int main()
{
	char arr[]="hello";
	//int len = strlen(arr); qiu chang du 
	//printf("$d\n",len); 
	int len=my_strlen(arr);
	printf("len=%d\n",len);
	return 0;
} 
