#include "main.h"
/**
 * _strlen - prints size of a string
 * @s: string
 * Return: Length of string
 */
int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
