#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,maximum,minimum;
	printf("enter a value :");
	scanf("%d",&a);
	printf("enter b value :");
	scanf("%d",&b);
	printf("maximum value is : %d\n",maximum=((a+b)+abs(a-b))/2);
	printf("minimum value is : %d",minimum=((a+b)-abs(a-b))/2);
}
