#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: grid width
 * @height: grid height
 * Return: allocated grid
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **m;

	if (width <= 0 || height <= 0)
		return (NULL);

	m = malloc(sizeof(int *) * height);

	if (m == NULL)
	{
		free(m);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		m[i] = malloc(sizeof(int) * width);

		if (m[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(m[j]);
			}
			free(m);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			m[k][l] = 0;
		}
	}
	return (m);
}

