#include<stdio.h>
void main()
{
	int c,a,t;
	c=4;
	a=2;
	t=21;
	printf("Enter the numbers:-");
	scanf("%d %d %d",&c,&a,&t);
	printf("\ndecoded numbers of %d,%d and %d is %c%c%c",c,a,t,95+c,95+a,95+t);
}
