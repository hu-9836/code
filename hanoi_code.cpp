#include<stdio.h>
void hanoi(int x,char A,char B,char C)
{
	if(x==1)
		printf("%c-->%c\n",A,C);
	else
		{
			hanoi(x-1,A,C,B);
			printf("%c-->%c\n",A,C);
			hanoi(x-1,B,A,C);
		}
 } 
int main()
{
	int x;
	scanf("%d",&x);
	hanoi(x,'A','B','C');	
	return 0;
}
