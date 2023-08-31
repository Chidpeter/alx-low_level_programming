#include "main.h"

/**
 * flip_bits - this function countss the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a;
	int z = 0;
	unsigned long int c;
	unsigned long int e = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		c = e >> a;
		if (c & 1)
			z++;
	}

	return (z);
}
