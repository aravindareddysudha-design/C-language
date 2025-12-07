#include<stdio.h>
main()
{
	int n,rem,rev,temp=0;
	printf("enter n value");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(temp==rev)
	printf("palindrom");
	else
	printf("not a palindrom");
}
