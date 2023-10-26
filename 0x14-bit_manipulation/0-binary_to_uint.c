#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: the binary number string
 * Return: 0 if b is NULL and converted number otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int j;

	i = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}
	}
	for (j = 0; b[j] != '\0'; b++)
	{
		i <<= 1;
		if (b[j] == '1')
		{
			i = i + 1;
		}
	}
	return (i);
}
