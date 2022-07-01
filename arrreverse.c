#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int arr[n];
	int b[n];
	for (i=0;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=n-1,j=0; i>=0; i--,j++)
	{
		b[j]=arr[i];
	}
	for(j=0;j<n;j++)
	{
	printf("%d ",b[j]);	
	}
	
}
