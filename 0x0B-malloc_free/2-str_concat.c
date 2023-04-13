#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *s;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	i = 0;
	while (s1[i])
		i++;

	j = 0;
	while (s2[j])
		j++;

	k = i + j;
	s = malloc((sizeof(char) * k) + 1);

	if (s == NULL)
		return (NULL);
	j = 0;
	for (l = 0; l < k; l++)
	{
		if (l <= i)
			s[l] = s1[l];
		if (l >= i)
		{
			s[l] = s2[j];
			j++;
		}
	}
	s[l] = '\0';
	return (s);
}
