#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a and b values");
	scanf("%d %d",&a,&b);
	printf(" 1 :  + \n 2 :  - \n 3 :  * \n  4 :  / \n");
	printf("enter the value");
	scanf("%d",&c);
	switch(c)
	{
		case 1: printf("%d",a+b);
		break;
		case 2: printf("%d",a-b);
		break;
		case 3: printf("%d",a*b);
		break;
		case 4: printf("%d",a/b);
		break;
		default :
			printf("give correct input");
			break;
	}
}
