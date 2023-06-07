#include "main.h"
/**
 * _pow_recursion - returns the power of x ** y
 * @x: base
 * @y: power
 * Return: x ** y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (x == 0)
		return (0);
	return (x * _pow_recursion(x, y - 1));
}
