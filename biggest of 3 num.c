#include<stdio.h>
main()
{
	int a,b,c,biggest;
	printf("entre a,b,c values");
	scanf("%d%d%d",&a,&b,&c);
	biggest=((a>b)?(a>c)?a:c):((b>c)?b:c);
	printf("the biggest num is %d",biggest);
}
