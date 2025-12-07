#include<stdio.h>
#include<math.h>
main()
{
	float p,t,r,SI,CI;
	printf("entre principle,time&rate of interest");
	scanf("%f%f%f",&p,&t,&r);
	SI=p*t*r/100;
	CI=p*pow(1+r/100,t)-p;
	printf("the simple interest is %f\n",SI);
	printf("the compound interest is %f",CI);
}
