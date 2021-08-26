#include<stdio.h>
int is_run(int a)
{
	if(a%4==0)
		return 1;		//run nian fan hui 1
	else
		return 0;
	
}
int main()
{
	int x,y;
	scanf("%d",&x);		//shu ru nian fen
	y=is_run(x);
	if(y==1)			// 1 de shi hou wei run
		printf("yes!");
	else				//fan zhi
		printf("no!"); 
	return 0;
} 

