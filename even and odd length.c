#include<stdio.h>
int main()
{
	int n,r,even=0,odd=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		n=n/10;
	}
	if (even==0)
	{
		printf("complete odd");
	}
	else if(odd==0)
	{
		printf("complete even");
	}
	else
	{
		printf("mixed");
}}
	
	
