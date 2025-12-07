#include<stdio.h>
int fib(int a, int b);
main()
{
    fib(0,1);
}
    int fib(int a,int b)
{
	
  int i,n;
  	scanf("%d",&n);
  	printf("%d %d",a,b);
  for(i=0;i<n;i++)
  {
  	int c=a+b;
  	printf("%d",c);
  	a=b;
  	b=c;
}
}
