//cai shu zi
#include<stdio.h>
#include<time.h>
#include<stdlib.h>		//RAND_MAX-32767  sui ji shu zui da zhi 
void srand(unsigned int seed);	//she zhi yi ge sui ji qi dian 
play()
{
	printf("#################\n");
	printf("####1.k 0.t######\n");
	printf("#################\n");
}
game()
{
	int ret=0;		//ding yi sheng cheng yi ge sui ji shu 
	int guess=0;	//jie shou shu zi
	ret=rand()%100+1;		//sheng cheng sui ji shu (1-100)
	//printf("%d\n",ret);
	while(1)		//jin ru you xi
	{
		printf("ni de shu zi:>");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("da\n");
		}
		else if(guess<ret)
		{
			printf("xiao\n");
		}
		else
		{
			printf("¡Ì\n");
			break; 
		}
	}
}
int main()
{
	int a,x;
	srand((unsigned int)time(NULL));		//jin ru sui ji
	do
	{
		play();		//jin ru chu shi hua mian
		
		printf("case:>");		// jin ru
		scanf("%d",&a);
		switch(a)
		{
			case 0:
				printf("tui chu!!!\n");
				break;
			case 1:
				game();
				break;
			default:
				printf("cuo wu!\n");
				break;
		 }
	}while(a);
	return 0;
} 
