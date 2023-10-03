/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc > 0) {
        printf("%s\n", argv[0]);
    }
    return 0;
}
