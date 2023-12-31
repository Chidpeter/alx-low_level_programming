#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - a fn that detects a prime number
 * @n: input value
 *
 * Return: 1 if n is a prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - a fn that detects a prime number recursively
 * @n: input value
 * @i: iterator
 *
 * Return: 1 if n is a prime number
 */

int actual_prime(int n, int i)
{
	if (i == 1)
	return (1);
	if (n % i == 0 && i > 0)
	return (0);
	return (actual_prime(n, i - 1));
}
