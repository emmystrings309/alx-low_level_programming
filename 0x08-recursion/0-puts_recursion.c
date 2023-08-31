#include "main.h"

/**
 * _put_recursion - Prints a String followed by a new line.
 * @s: The String to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of the string */
	{
		_putchar('\n'); /* Print a new line and return */
		return;
	}

	_putchar(*s); /* Print the current character */
	_puts_recursion(s + 1); /* Recursive call with the next character */
}
