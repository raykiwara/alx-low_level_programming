#include "main.h"
/**
 * rbin - prints number in binary
 * @n: number
 */
void rbin(unsigned long int n)
{
	if (n == 0)
		return;
	rbin(n >> 1);
	if ((n & 1) == 1)
	{
		_putchar('1');
	}
	if ((n & 1) == 0)
	{
		_putchar('0');
	}
}
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		rbin(n);
	}
}
