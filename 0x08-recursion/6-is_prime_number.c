#include "main.h"
/**
 * is_prime_number - checks for prime numbers
 * @n: number
 * Return: 0 if not prime, 1 otherwise
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n == 0 || n == 1)
		return (0);
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_number(n));
	i++;
}
