#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
	int r,d,c,A;
	printf("enter the value of r");
	scanf("%d",&r);
	d=2*r;
	c=2*PI*r;
	A=PI*r*r;
	printf("diameter of circle is=%d\n",d);
	printf("circumference of circle is=%d\n",c);
	printf("area of circle is%d\n",A);
	return 0;
	}
