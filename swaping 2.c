#include<stdio.h>
main()
{
	int a=10,b=5;
	printf("before swaping a=%d,b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swaping a=%d,b=%d",a,b);
}
