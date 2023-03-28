#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: value af first integer
 * @b: value of second integer
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *a;
	*a = *b;
	*b = change;
}
