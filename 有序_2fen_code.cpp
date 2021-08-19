#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6};
    int x;				//xun zhao
    scanf("%d",&x);
    int sz=sizeof(arr)/sizeof(arr[0]);		//ge shu 
    int left=0;
    int right=sz-1;
    
    while(left<=right)		//fang zhi guo xia  biao
    {
    	
    	int mid=(left+right)/2;		//zhe ban xia biao
    	if(arr[mid]<x)		
    	{
    		left=mid+1;			//xia<x	  you yi
    	}
    	else if(arr[mid]>x)
    	{
    		right=mid-1;		//xia>x   zuo yi
    	}
    	else
    	{
    		printf("zhao dao =%d\n",mid);
    		break;
    	}
    }
    if(left>right)
    {
    	printf("zhao bu dao");
    }
}
