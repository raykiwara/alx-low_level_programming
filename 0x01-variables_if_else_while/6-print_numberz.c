#include <stdio.h>
/**
 * main - entry point
 *
 * Return: zero
 */
int main(void)
{
int i;

for (i = 0; i <= 9; i++)
	putchar(i + '0');
putchar('\n');
return (0);
}
