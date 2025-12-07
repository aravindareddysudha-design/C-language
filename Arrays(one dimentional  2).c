#include<stdio.h>
main()
{
	int i,marks[6];
	for(i=0;i<=5;i++)
	{
		printf("entre sub %d marks",i+1);
		scanf("%d",&marks[i]);
	}
	printf("marks are");
	for(i=0;i<=5;i++)
	{
		printf("%d\n",marks[i]);
	}
}
