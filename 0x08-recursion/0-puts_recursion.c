#include "main.h"

/**
 * _put_recursion - Prints a String followed by a new line.
 * @s: The String to be printed.
 *
 * Description: This function prints the characters in the string 's' one by one until it reaches the end of the string, at which point it prints a new line
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
