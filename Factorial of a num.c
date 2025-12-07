#include<stdio.h>
main()
{
	int n,i;
	long long fact=1;
	printf("enter n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	fact=fact*i;
	printf("%d factorial is %lld",n,fact);
}
