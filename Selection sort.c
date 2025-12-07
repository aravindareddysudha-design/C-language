#include<stdio.h>
main()
{
	int a[20],i,j,n,min,temp=0;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("emtre %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n-1;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
		    }
		}
				temp=a[i];
				a[i]=a[min];
				a[min]=temp;
			}
	printf("the sorted array is:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
