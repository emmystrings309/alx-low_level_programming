#include "main.h"

/**
 * _strlen_recursion - prints the length of the string 
 * @s: string to calculate the length of
 * 
 * Return: Always 0.
*/

int _strlen_recursion(char *s)
{
    int length = 0;
    if (*s == '\0'/* condition */)
    {
        /* code */
        return length += 0;;
    }

    return (1 +_print_rev_recursion(s + 1));
    
}