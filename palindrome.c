#include<stdio.h>
int main()
{
	int n,r,rev=0,s;
	scanf("%d",&n);
	s=n;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
			n=n/10;
	}
	if (rev==s)
	{
		printf("palindrome");
	}
	else
	{
		printf("Not a palindrome");
	}

}
