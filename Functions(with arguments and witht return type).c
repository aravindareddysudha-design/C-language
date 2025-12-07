//function with argument and with returntype
#include<stdio.h>
int addition(int,int);
main()
{
	int a,b,result;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	result=addition(a,b);
	printf("The sum is:%d",result);
}
int addition(int x,int y)
{
	return x+y;
	
}
