#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,root1,root2,disc,real,image,i;
	printf("enter a,b,c values");
	scanf("%f%f%f",&a,&b,&c);
	disc=(b*b-4*a*c);
	if(disc>0)
	{
		root1=-b+sqrt(disc)/(2*a);
		root2=-b-sqrt(disc)/(2*a);
		printf("real and distinct%f\t%f",root1,root2);
	}
	else if(disc==0)
	{
		root1=-b/(2*a);
		root2=-b/(2*a);
		printf("real and equal%f	%f",root1,root2);
	}
	else
	{
		real=-b/(2*a);
		image=sqrt(disc)/(2*a);
		printf("complex %.2f+%.2fi and %.2f-%.2fi",real,image,real,image);
	}
}
