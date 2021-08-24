#include<stdio.h>
int main()
{
	long int x;
	int x1,x2,x4,x6,x10,l;		//fen li run duan
	scanf("%ld",&x);
	x1=100000*0.1;
	x2=x1+100000*0.075;
	x4=x2+200000*0.05;
	x6=x4+200000*0.03;
	x10=x6+400000*0.015;
	if(x<=100000)
	l=x*0.1;
		else if(x<200000)
		l=x1+(x-100000)*0.075;
			else if(x<400000)
			l=x2+(x-200000)*0.05;
				else if(x<=600000)
				l=x4+(x-400000)*0.03;
					else if(x<=1000000)
					l=x6+(x-600000)*0.15;
						else
						l=x10+(x-1000000)*0.01;
	printf("li run:%d>",l);
	return 0;
} 
