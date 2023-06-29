#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a string
 */
char *argstostr(int ac, char **av)
{
	int c = 0, i = 0, j = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			c++;
			j++;
		}
		j = 0;
		i++;
	}
	s = malloc((sizeof(char) * c) + ac + 1);

	if (s == NULL)
		return (NULL);

	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			s[k] = av[i][j];
			k++;
			j++;
		}
		s[k] = '\n';

		j = 0;
		k++;
		i++;
	}
	k++;
	s[k] = '\0';
	return (s);
}
