#include<stdio.h>
int main()
{
    int n,k,i,j,count=0;
    scanf("%d\n%d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        arr[j]=arr[i];
    }
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		 if(arr[i]+arr[j]%k==0)
        {
            count++;
        }
		}
       
    }
    printf("%d",count);
}
