#include "main.h"
/**
 *  _abs - prints absolute number
 *  @a: function parameter
 *  Return: a returns absolute number
 */
int _abs(int a)
{
	if (a < 0)
		a = a * -1;
	else if (a >= 0)
		a = a;
	return (a);
}
