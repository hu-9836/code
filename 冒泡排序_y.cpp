#include<stdio.h> 
void bubble_sort(int arr[],int sz)
{
	int x=0;
	int y=0;
	int z=0;
	//que ding pai xu de tang shu 
	for(x=0;x<sz;x++)
	{
		int flag=1; 	// ru guo yi jing you xu 
		//mei yi tang pai xu
		for(y=0;y<sz-1-x;y++)
		{
			if(arr[y]>arr[y+1])
			{
				z=arr[y];
				arr[y]=arr[y+1];
				arr[y+1]=z;
				flag=0;		//bu wan quan you xu
			}
		}
		if(flag==1)
		{
			break;
		}
	}
}
int main()
{
	int  arr[]={9,8,7,6,5,4,3,2,1,0};
	int  sz=sizeof(arr)/sizeof(arr[0]);
	int  a=0;
	bubble_sort(arr,sz);
	for(a=0;a<sz;a++)
	{
		printf("%d ",arr[a]);
	}
	return 0;
}
