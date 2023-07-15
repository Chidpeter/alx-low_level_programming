#include <stdio.h>

/**
 * main - Printing through standard error
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	char a[] = "and that piece of art is useful\"";

	fprintf(stderr, "%s - Dora Korpar, 2015-10-19\n", a);
	return (1);
}
