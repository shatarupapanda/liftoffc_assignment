#include<stdio.h>

int main()
{
	char name[100],branch[100],hobbies[100];
	int regno=0;
	printf("students basic information:\n");
	printf("enter your name %c\n",name);
	scanf("%s",&name);
	printf("registration number is %d\n",regno);
	scanf("%d",&regno);
	printf("my branch is_\n",branch);
	scanf("%s",&branch);
	printf("my hobbies are _\n",hobbies);
	scanf("%s",&hobbies);
	printf("name:%s\n,regno:%d\n,branch:%s\n,hobbies:%s\n",name,regno,branch,hobbies);
	return 0;
}
