#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i = s[i] + _strlen_recursion(s[i] + 1);
		return (i);
	}
}
