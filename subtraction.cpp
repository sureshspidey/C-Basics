#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int a,b,c,d,deno;
float root1,root2;
printf("\n quadratic equation");
printf("\n enter the values for a,b,c");
scanf("%d%d%d",&a,&b,&c);
d=(b*b)-(4*a*c);
deno=2*a;
if(d>=0)
{
printf("\n real roots \n");
root1=(-b+sqrt(d))/deno;
root2=(-b-sqrt(d))/deno;
printf("root1=%F\troot2=%F",root1,root2);
}
else if(d==0)
{
printf("\n equal roots");
root1=-b/deno;
root2=-b/deno;
printf("root1=%f\troot2=%f",root1,root2);
}
else
printf("\n imaginary roots");
return 0;
} 
