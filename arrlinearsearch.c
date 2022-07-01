#include<stdio.h>
int main()
{
	int n,j;
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
		if (arr[i]%j==0)
		{
			printf("yes");
		}
	}
	
}
