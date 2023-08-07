#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: Always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
    printf("%d\n", argc - 1);

    return 0;
}
