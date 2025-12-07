#include<stdio.h>

main()
{
	int a[2][2],t[2][2];
	int r,c,i,j;
	printf("enter no.of rows and coloumns:\n");
	scanf("%d%d",&r,&c);
	printf("entre %d elements:\n",r*c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++);
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++);
		{
			t[i][j]=a[i][j];
		}
    }
    printf("Transpose of matrix is:\n");
    for(i=0;i<c;i++)
	{
		for(j=0;j<r ;j++);
		{
			printf("%d   ",t[j][i]);
		}
		printf("\n");
    }
}
