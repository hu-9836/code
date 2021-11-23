#include<stdio.h>
void move(char q,char w)		 
{
	printf("%c->%c\n",q,w);	//如果是俩个柱子就是(q,w),那么从q的柱子移动到w柱子 
}
void hanoi(int a,int x,int y,int z)
{
	if(a==1)
	{
		move(x,z);
	}
	else
	{
		hanoi(a-1,x,z,y);	//a-1个盘子从x，经过z，移动到y 作为临时存放 
		move(x,z);			//将x中的盘子移动到z 
		hanoi(a-1,y,x,z);	//再将a-1个盘子从y，经过x，移动到z 
	}
}
int main()
{
	int i;					//汉诺塔的个数 
	scanf("%d",&i);
	hanoi(i,'x','y','z');	//i为个数，xyz分别代表一个柱子 
	return 0;
} 
