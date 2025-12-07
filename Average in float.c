#include<stdio.h>
main()
{
	int a,b,c,d,e,average;
	printf("enter a,b,c,d,e,values");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	average=(float)(a+b+c+d+e)/5;
	printf("Average:%d",average);
}
