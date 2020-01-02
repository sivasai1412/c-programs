#include<stdio.h>
void main()
{
	char name[20];
	printf("enter the name");
	scanf("%[^\n]s",name);
	printf("name is %s",name);
}
