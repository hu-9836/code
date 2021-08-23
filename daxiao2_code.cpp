#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int max=arr[0];		//ding yi arr[di 1 ge zhi]
	int x=0;
	int sz=sizeof(arr)/sizeof(arr[0]);			//ge shu
	for(x=1;x<sz;x++)
	{
		if(arr[x]>max)
		{
			max=arr[x];		// chong xin ding yi
		}
	}
	printf("max=%d\n",max);
	return 0;
} 
