#include<stdio.h>
int main()
{
	int n,i,num=0;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
		if(n%i==0)
		num++;
	if(num==1)
	printf("Prime number");
	else
	printf("Not a Prime number");
}
