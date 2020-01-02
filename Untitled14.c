// write a program to accept one numbers of two digits and display difference between two digits
#include<stdio.h>
int main()
{
	int a;
	scanf("%2d",&a);
	printf("%d\n",a);
	printf("%d",a/10 - a%10);	
}
