#include<stdio.h>
int main()
{
	printf("please enter the card\n");
	int pin,b,balance=20000;
	int money;
	printf("please enter the pin\n");
	scanf("%d",&pin);

	printf("1. balance enquiry\n 2. withdrawl\n 3.deposit\n 4.exit\n");
		scanf("%d",&b);
	switch(b)
	{
	case 1: printf("your current balance: %d \n",balance);
	break;
	case 2:
		printf("enter money\n");
		scanf("%d",&money);
		if(money%100==0)
		{
		  balance=balance-money;
		  printf("your current balance is %d",balance);
		}
	break;
	
	case 3:
		printf("enter money\n");
		scanf("%d",&money);
		if(money%100==0)
		{
			balance=balance+money;
			printf("your current balance is %d",balance);
		}
	break;
	case 4:
		printf("remove your card\n  please visit again\n thank you\n");
		break;
	default:
		printf("invalid option");
		break;
	}
}
