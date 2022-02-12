#include<stdio.h>

int main()
{
	char name[100],branch[100],hobbies[100];
	int regno=0;
	printf("students basic information:\n");
	printf("enter your name =");
	gets(name);
	
	printf("my branch is=");
	gets(branch);
	printf("my hobbies are=");
	gets(hobbies);
	printf("registration number is=");
	scanf("%d", &regno);
	
	printf("\n\n name:%s\nregno:%d\nbranch:%s\nhobbies:%s\n",name ,regno ,branch, hobbies);
	return 0;
}
