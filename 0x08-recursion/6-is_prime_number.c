#include "main.h"
/**
 * is_prime_number - checks for prime numbers
 * @n: number
 * Return: 0 if not prime, 1 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (is_prime_number(n, i + 1));
}
