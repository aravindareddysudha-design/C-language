#include<stdio.h>
void display();
main()
{
	int x;
	printf("entre x value");
	scanf("%d",&x);
    printf("the value of x is %d\n",x);
    display();
    // printf("the value of y is in main %d",y); 
} 
void display()
{
	int y;
	printf("entre y value");
	scanf("%d",&y);
	printf("the value of y in display is %d\n",y);
}
