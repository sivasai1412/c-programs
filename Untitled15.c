#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",a+(100-a%100));
	printf("%d",((a/100+1)*100));
}
