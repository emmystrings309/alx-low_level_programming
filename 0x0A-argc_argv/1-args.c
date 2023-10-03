#include <stdio.h>

/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[]) {
    printf("%d\n", argc - 1);  // argc includes the program name as the first argument
    return 0;
}
