#include<stdio.h>
int main()
{
	int day,mouth,year,sum,x;
	printf("shu ru ni nian yue ri:>");
	scanf("%d %d %d",&year,&mouth,&day);
	switch(mouth)		//ji suan zhi qian de tian shu 
	{
		case 1:sum = 0; break;
 		case 2:sum = 31; break;
 		case 3:sum = 59; break;
		case 4:sum = 90; break;
		case 5:sum = 120; break;
		case 6:sum = 151; break;
		case 7:sum = 181; break;
		case 8:sum = 212; break;
		case 9:sum = 243; break;
 		case 10:sum = 273; break;
		case 11:sum = 304; break;
 		case 12:sum = 334; break;
 		default:printf("data error"); break;
	}
	sum=sum+day;		// zhi qian de yue fen jia shang tian shu
	if(year%4==0)		// pan duan run nian
		x=0;
	else
		x=1;
	sum+=x;
	printf("zhe shi jin nian de di %d tian\n",sum);
	
	return 0;
} 
