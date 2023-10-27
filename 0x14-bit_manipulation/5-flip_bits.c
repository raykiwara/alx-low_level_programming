#include "main.h"
/**
 * flip_bits - gives number of bits you need to flip from one number to another
 * @n: one number
 * @m: another
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j;
	unsigned long int k, l;

	j = 0;
	l = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		k = l >> i;
		if (k & 1)
		{
			j++;
		}
	}
	return (j);
}
