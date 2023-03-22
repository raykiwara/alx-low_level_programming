#include "main.h"
/**
 * print_sign - prints sign
 * @n: function parameter
 * Return: 0 if equal to zero, 1 if positive, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

