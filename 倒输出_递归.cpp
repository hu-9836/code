#include<stdio.h>
void print(int a)
{
	printf("%d",a%10);
	if(a>9)
	{
		print(a/10); 
	}
	
}
int main()
{
	unsigned int x=0;
	scanf("%d",&x);
	// di gui 
	print(x);
 } 
