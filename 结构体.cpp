#include<stdio.h>
//创一个结构体类型 struch Str
struct Str
{
	//成员变量 
	char name[20];
	int age;
	char id[20];
};
int main()
{
	int a = 10;
	//创建students stu类型创建一个学生对象s1，并初始化
	struct Str s1 = {"张三",20,"19991011"}; 
	//struct Str* ps = &s1;
	printf("%d\n",s1.age);		//printf("%d\n",(*ps).age);		ps->age
	printf("%s\n",s1.name);		//printf("%s\n",(*ps).name);	ps->name
	printf("%s\n",s1.id);		//printf("%s\n",(*ps).id);		ps->id
	//结构体变量.成员名 
	
	return 0;
}
