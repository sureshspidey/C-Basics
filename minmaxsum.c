#include<stdio.h>
int main()
{
	long int i,min,max,sum=0;
	long int arr[5];
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	if(arr[i]<min)
	{
		min=arr[i];
	}
	max=arr[0];
	if(arr[i]>max)
	{
		max=arr[i];
	}
	for(i=0;i<5;i++)
	{
	sum=sum+arr[i];	
	}
	printf("%ld %ld",sum-min,sum-max);
	
	
}
