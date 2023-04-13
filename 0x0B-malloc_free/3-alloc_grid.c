#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - prints 2D array
 * @width: dimension 1
 * @height: dimension 2
 * Return: 2D array
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = malloc(sizeof(int *) * height);

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(int) * width);

		if (s[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(s[j]);
			}
			free(s);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			s[k][l] = 0;
		}
	}
	return (s);
}
