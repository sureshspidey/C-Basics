#include<stdio.h>
int main()
{
	int n,j,count=0;
	scanf("%d",&j);
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if (arr[i]==j)
		{
			count++;
			
		}
	}printf("%d",count);
	
}
