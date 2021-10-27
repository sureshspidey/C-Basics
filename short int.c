#include<limits.h>
void main()
{
	printf("short int:\n\tsigned:%hd to %hd",SHRT_MIN,SHRT_MAX);
	printf("\n\tunsigned:%hd to %hd", 0,USHRT_MAX);
	printf("\n\nint:\n\tsigned:%d to %d",INT_MIN,INT_MAX);
	printf("\n\tunsigned:%d to %d",0,UINT_MAX);
	printf("\n\nlong int:\n\tsigned:%ld to %ld",LONG_MIN,LONG_MAX);
	printf("\n\tunsigned:%ld to %ld",0,ULONG_MAX);
	printf("\n\nlong long int:\n\tsigned:%lld to %lld",LONG_LONG_MIN,LONG_LONG_MAX);
	printf("\n\tunsigned:%lld to %lld",0,ULONG_LONG_MAX);
}
