#include "main.h"

/**
 * _isupper - defime if a character is upper case
 *
 * Description: primts the alphabet with _putchar
 * @c: void
 */

int _isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
