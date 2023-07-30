#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array
 * @a: arrays to be printed
 * @n: number of arrays to be printed
 * Return: returns printed elements
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
	printf("%d", a[b]);
	if (b != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
