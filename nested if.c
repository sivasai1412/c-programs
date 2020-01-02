#include<stdio.h>
int main()
{
	int h;
	scanf("%d",&h);
	if(h>150)
	{
		if(h<165)
	    	printf("aversge");
		else if(h<190)
	 		printf("tall");
		else
			printf("abnormal height");
	}
	else
	{
		printf("dwarf");
	}
}
