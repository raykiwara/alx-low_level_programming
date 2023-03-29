#include "main.h"
/**
 * _strlen - prints the length of string
 * @*s: string
 */
int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
