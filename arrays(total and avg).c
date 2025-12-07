#include<stdio.h>
main()
{
	int a[5],total=0,i;
	float avg;
	for(i=0;i<5;i++)
	{
	printf("enter %d sub marks",i+1);
	scanf("%d",a[i]);
    }
	for(i=0;i<5;i++)
	total=total+a[i];
	avg=total/500*100;
	printf("total=%d\n average=%f",total,avg);
}
