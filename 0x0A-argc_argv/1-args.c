#include <stdio.h>
#include "main.h"

/**
 * main - a fn that prints the number of arguments
 * @argc: the arguments
 * @argv: the array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
