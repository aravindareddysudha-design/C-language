//function with argument and without returntype
#include<stdio.h>
void addition(int,int);
main()
{
	int a,b;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	addition(a,b);
}
void addition(int x,int y)
{
	int c;
	c=x+y;
	printf("The sum is: %d",c);
}
