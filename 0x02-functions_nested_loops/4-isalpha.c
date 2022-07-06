#include "main.h"

/**
 * _isalpha - check for alphabet
 *
 * @c: ASCII code
 *
 * Return: Always 1 for letter, 0 for the test
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else{
		return (0);
	}
	_putchar('\n');
}
