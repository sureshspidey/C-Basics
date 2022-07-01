#include<stdio.h>
int main()
{
	int n,k,max1,max2;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max1=arr[0];
	for(i=0;i<n;i++)
	{
		if (arr[i]>max1)
		{
		max1=arr[i];
		} 
	}
	printf("max1=%d\n",max1);
	for(i=0;i<n;i++)
	{
		if (max1==arr[i])
		{
			k=i;
		printf("arr[%d]\n",k);
		arr[k]=0;	
		}
    }
	for(i=0;i<n;i++)
	{
		if(arr[i]>max2)
		max2=arr[i];
	}	printf("max2=%d",max2);	
}
