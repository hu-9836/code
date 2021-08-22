#include<stdio.h>
int main()
{
	int a;
	double y=0.0;
	double x=0.0;
	for(a=1;a<=100;a++)
	{
		x=1.0/a;
		y=y+x;
	}
	printf("y=%lf",y);
	return 0;
}

//	yi ge zheng shu yi ge fu shu

/*
#include<stdio.h>
int main()
{
	int a;
	int b=1;
	double y=0.0;
	double x=0.0;
	for(a=1;a<=100;a++)
	{
		x=b*1.0/a;
		y=y+x;
		b=-b;
	}
	printf("y=%lf",y);
	return 0;
}
*/
