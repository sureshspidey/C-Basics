#include<stdio.h>
int main()
{
	int n,r,even=0,odd=0,esum=0,osum=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r%2==0)
		{
			even=r;
			esum=esum+even;
		}
		else
		{
			odd=r;
			osum=osum+odd;
		}
		n=n/10;
	}printf("even sum=%d\nodd sum=%d",esum,osum);
}
