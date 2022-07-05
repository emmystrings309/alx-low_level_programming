#include <stdio.h>
/**
 * main -prints the alphabet except the letters q and e.
 * (*
 * return: 0 on success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c <= 'z')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
