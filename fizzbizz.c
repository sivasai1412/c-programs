#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x%3==0 && x%5==0)
	{
		printf("fizz bizz");
	}

	else if(x%5==0)
	{
		printf("bizz");
	}
	else if(x%3==0)
	{
		printf("fizz");
	}
	else
	{
		printf("%d",x);
	}
}
