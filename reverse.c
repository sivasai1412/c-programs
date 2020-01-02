#include<stdio.h>
int main()
{
	int a,r,c=0;
	scanf("%d",&a);
	while(a>0)
	{
		r=a%10;
		c=c*10+r;
		a=a/10;
	}
	printf("%d",c);
}
