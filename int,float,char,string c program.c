/*write a simple program to read int,float,char and string using scanf and display using printf*/
#include<stdio.h>
main()
{
	int x;
	float y;
	char ch;
	char s[100];
	printf("entre integer:");
	scanf("%d",&x);
	printf("entre floating point number: ");
	scanf("%f",&y);
	printf("entre character:");
	scanf("\n");
	scanf("%c",&ch);
	printf("entre a string:");
	scanf("%s",s);
	printf("the integer is %d\n ",x);
	printf("the floating point number is %f\n",y);
	printf("the character is %c\n",ch);
	printf("the string is %s",s);
}

