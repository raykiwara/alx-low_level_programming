#include "main.h"
/**
 * _isupper - prints upper and lower case
 * @c: function parameter
 * Return: 1 if upper and 0 if lower
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
