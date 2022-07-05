#include<stdio.h>
/**
 * main-prints the alphabet in lowercase.
 * (*
 * return:0 on success
 **/
int main(void)
{
	char c = 'a';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
