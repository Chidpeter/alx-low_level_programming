#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - a fn that prints all args it receives
 * @argc: arguments to be printed
 * @argv: array of arguments
 * Return: 0
 */

int (int argc, char *argv[])
{
	/** int a, b, mul;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);
	return (0);
	*/
	int a, b, result;

	if (argc != 3)
	{
	printf("Error\n");
	return 1;
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = 0;
	while (b != 0)
	{
	if (b & 1)
	{
	result += a;
	}
	a <<= 1;
	b >>= 1;
	}
	printf("%d\n", result);
	return 0;
}
