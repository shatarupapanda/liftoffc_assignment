#include<stdio.h>
int main()
{
	char ch;
	int a,b,result;
	printf("enter the operator(+,*,-,/)");
	scanf("%c",&ch);
	printf("enter two operands a and b");
	scanf("%d%d",&a,&b);
	switch(ch)
	{
		case'+':
			result=a+b;
			break;
        case'-':
        	result=a-b;
        	break;
        case'*':        	
		result=a*b;
        	break;
        case'/':
        	result=a/b;
        	break;
        defult:
        	printf("invalid operation\n");
	}
	printf("result=%d",result);
	return 0;
	}
