//function without argument and without returntype
#include<stdio.h>
void addition();
main()
{
	addition();
	addition();
	addition();
}
void addition()
{
	int a,b,c;
	printf("entre a,b values");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("The sum is:%d\n",c);
}
