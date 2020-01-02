#include<stdio.h>
int main()
{
	int n,i,c=0,c1=1,x;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d",c);
		x=c+c1;
		c=c1;
		c1=x;
	}
}
