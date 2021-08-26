// su shu pan duan
#include<stdio.h>
#include<math.h>
int is_ps(int a)
{
	int b;
	for(b=2;b<a;b++)		// b<=sqrt(a)==b<a
	{
		if(a%b==0)		//zheng chu fan hui 0
			return 0;
	}
	return 1;		//mei you chu dao 0
}
int main()
{
	int x;
	scanf("%d",&x);
	if(is_ps(x)==1)		//pan duan su shu 1=su 
		printf("su shu");
	else
		printf("no");
	return 0;	
} 
