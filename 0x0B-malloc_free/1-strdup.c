#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: string
 * Return: Duplicated string
 */
char *_strdup(char *str)
{
	int i = 1;
	int k;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		s[k] = str[k];
	s[k] = '\0';
	return (s);
}
