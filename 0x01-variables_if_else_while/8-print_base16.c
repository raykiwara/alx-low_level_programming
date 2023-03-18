#include <stdio.h>
/**
 * main - entry point
 *
 * Return: zero
 */
int main(void)
{
int i;
char j;

for (i = 0; i <= 9; i++)
	putchar(i + '0');
for (j = 'a'; j <= 'f'; j++)
	putchar(j);
putchar('\n');
return (0);
}
