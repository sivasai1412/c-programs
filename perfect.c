#include<stdio.h>
int main()
{
	int x,i,s=0;
	scanf("%d",&x);
	for (i=1;i<x;i++)
	{
		if(x%i==0)
		s=s+i;
		
	}
	if(s==x)
	{
		printf("perfect");
	}
	else 
	printf("not");
}
