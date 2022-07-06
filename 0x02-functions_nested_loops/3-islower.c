#include "main.h"
/**
 * _islower - Check for lowercase.
 *
 * @c: ASCII code
 *
 * return: Always 1.(success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
