#include<stdio.h>
main()
{
	int i,j;
	printf("entre i value");
	scanf("%d",&i);
	j=(i++)+(++i);
	printf("%d",j);
}
