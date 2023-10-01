#include "main.h"

/**
 * _strlen_recursion - prints the length of the string 
 * @s: string to calculate the length of
 * 
 * Return: Always 0.
*/

void _print_rev_recursion(char *s)
{
    if (*s == '\0'/* condition */)
    {
        /* code */
        return;
    }

    _print_rev_recursion(s + 1);
    _putchar(*s);
}