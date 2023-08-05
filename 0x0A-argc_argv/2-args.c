#include <stdio.h>
#include "main.h"

/**
 * main - a fn that prints all args it receives
 * @argc: arguments to be printed
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
	printf("%s\n", argv[a]);
	}
	return (0);
}
