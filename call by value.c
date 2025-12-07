#include<stdio.h>
void swap(int,int);
main()
{
	int a,b;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	printf("before swaping a=%d,b=%d\n",a,b);
	swap(a,b);
	printf("in main function,after swaping a=%d,b=%d\n",a,b);
}
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("in swap function,after swaping a=%d b=%d\n",x,y);
}
