#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,disc;
	printf("enter a,b,c values");
	scanf("%f%f%f",&a,&b,&c);
	float root1,root2,real,imag;
	disc=(b*b-4*a*c);
	if(disc>0)
	{
		root1=(-b+sqrt(disc))/2*a;
		root2=(-b-sqrt(disc))/2*a;
		printf("%f\t%f",root1,root2);
	}
	else if(disc==0)
	{
	root1=-b/2*a;
	root2=-b/2*a;
	printf("%f\t%f",root1,root2);	
	}
	else
	{
		real=-b/2*a;
		imag=sqrt(disc)/2*a;
		printf("root1 is %f+i%f\nroot2 is %f-i%f",real,imag,real,imag);
	}
}
