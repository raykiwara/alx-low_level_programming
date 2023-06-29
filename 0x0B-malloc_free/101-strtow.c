#include "main.h"
#include <stdlib.h>

int wordcount(char *str);
int wordlength(char *str);
char **strtow(char *str);

/**
 * wordlength - gets the length of string
 * @str: string
 * Return: length
 */
int wordlength(char *str)
{
	int i = 0, j = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		j++;
		i++;
	}
	return (j);
}

/**
 * wordcount - counts words in a string
 * @str: string
 * Return: wordcount
 */
int wordcount(char *str)
{
	int i = 0, j = 0, words = 0;

	for (i = 0; *(str + i); i++)
		j++;

	for (i = 0; i < j; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += wordlength(str + i);
		}
	}
	return (words);
}

/**
 * strtow - splits a string into words
 * @str: string
 * Return: split string
 */
char **strtow(char *str)
{
	char **s;
	int i = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = wordcount(str);
	if (words == 0)
		return (NULL);

	s = malloc(sizeof(char *) * (words + 1));

	if (s == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[i] == ' ')
			i++;

		letters = wordlength(str + i);

		s[w] = malloc(sizeof(char) * (letters + 1));

		if (s[w] == NULL)
		{
			for (; w >= 0; w--)
				free(s[w]);
			free(s);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			s[w][l] = str[i++];

		s[w][l] = '\0';
	}
	s[w] = NULL;
	return (s);
}

