#include<stdio.h>
//��һ���ṹ������ struch Str
struct Str
{
	//��Ա���� 
	char name[20];
	int age;
	char id[20];
};
int main()
{
	int a = 10;
	//����students stu���ʹ���һ��ѧ������s1������ʼ��
	struct Str s1 = {"����",20,"19991011"}; 
	//struct Str* ps = &s1;
	printf("%d\n",s1.age);		//printf("%d\n",(*ps).age);		ps->age
	printf("%s\n",s1.name);		//printf("%s\n",(*ps).name);	ps->name
	printf("%s\n",s1.id);		//printf("%s\n",(*ps).id);		ps->id
	//�ṹ�����.��Ա�� 
	
	return 0;
}
