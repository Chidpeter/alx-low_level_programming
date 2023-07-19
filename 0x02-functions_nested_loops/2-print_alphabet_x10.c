#include "main.h"

/**
 * print_alphabet_x10 - A function that prints alphabets ten times
 */

void print_alphabet_x10(void)
{
	int i;
	char beta;

	for (i = 0; i < 10; i++)
	{
	for (beta = 'a'; beta <= 'z'; beta++)
	_putchar(beta);
	_putchar('\n');
	}
}
