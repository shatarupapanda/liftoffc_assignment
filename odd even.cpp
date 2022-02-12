#include<stdio.h>
int main()
{
	int a;
	printf("enter a number %d\n",a);
	scanf("%d",&a);
	switch(a%2)
	{
		case 0:
			printf("a is aeven number");
			break;
		case 1:
			printf("a is a odd number");
			break;
	}
	return 0;
}
