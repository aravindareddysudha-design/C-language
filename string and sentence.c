#include<stdio.h>
main()
{
	char sen[100];
	printf("entre a sentence");
	scanf("%[^\n]%*c",&sen);
	printf(sen);
}
