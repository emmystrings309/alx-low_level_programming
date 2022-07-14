#include "main.h"

/**
 * _puts - function that prints a string
 * @str: pointer type char
 * Return: always 0
 */
void _puts(char *str)
{
	for (; *str != '\0';)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
