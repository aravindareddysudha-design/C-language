//function without argument and with returntype
#include<stdio.h>
int addition();
main()
{
	int result;
	result=addition();
	printf("The sum is:%d",result);
}
int addition()
{
	int a,b,sum;
	printf("enter a,b values ");
	scanf("%d%d",&a,&b);
	sum=a+b;
	return sum;
} 
