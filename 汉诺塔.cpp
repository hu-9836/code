#include<stdio.h>
void move(char q,char w)		 
{
	printf("%c->%c\n",q,w);	//������������Ӿ���(q,w),��ô��q�������ƶ���w���� 
}
void hanoi(int a,int x,int y,int z)
{
	if(a==1)
	{
		move(x,z);
	}
	else
	{
		hanoi(a-1,x,z,y);	//a-1�����Ӵ�x������z���ƶ���y ��Ϊ��ʱ��� 
		move(x,z);			//��x�е������ƶ���z 
		hanoi(a-1,y,x,z);	//�ٽ�a-1�����Ӵ�y������x���ƶ���z 
	}
}
int main()
{
	int i;					//��ŵ���ĸ��� 
	scanf("%d",&i);
	hanoi(i,'x','y','z');	//iΪ������xyz�ֱ����һ������ 
	return 0;
} 
