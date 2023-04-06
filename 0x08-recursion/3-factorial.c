#include "main.h"
/**
 * factorial - returns factorial of a number
 * @n: number
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n > 0)
	{
		n = n * factorial(n - 1);
		return (n);
	}
	return (0);
}
