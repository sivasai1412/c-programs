#include<stdio.h>
int main(){
	char name[20];
	char cname[20];
	printf("enter your college name\n");	
	gets(cname);
	printf("college name is %s",cname);
	printf("enter your name\n");
	scanf("%[^\n]s",name);
	printf("name is %s",name);

}
