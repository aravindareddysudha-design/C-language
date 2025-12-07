#include<stdio.h>
void display();
int y=3;
main()
{
	int x;
	printf("entre x value");
	scanf("%d",&x);
    printf("the value of x is %d\n",x);
    display();
    printf("the value of y is in main %d\n",y); 
}
void display()
{
	printf("the value of y in display is %d\n",y);
}
