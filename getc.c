#include<stdio.h>
int main()
{
	char ch;
	puts("enter the character");
	ch=getc(stdin);//character stored in buffer
	fflush(stdin);
	puts("entered character is");
	putc(ch,stdout);
}
