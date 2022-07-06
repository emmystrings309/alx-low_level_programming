#include "main.h"

/**
 * main - program that prints _putchar,followed by a new line
 *
 * )*
 * return: 0 on success
 */
int main(void)
{
	char joy[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		_putchar(joy[i]);
	}
	_putchar('\n');
	return (0);
}
