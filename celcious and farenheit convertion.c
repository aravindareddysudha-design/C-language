#include<stdio.h>
main()
{
	float c,f,newf,newc;
	printf("entre c value");
	scanf("%f",&c);
	newf=c*1.8+32;
	printf("the temp in farenheit is %f\n",newf);
	printf("entre f value");
	scanf("%f",&f);
	newc=(f-32)/1.8;
	printf("the temp in celcious is %f",newc);
}
