#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns multiple of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 on failure 0 on success
 */
int main(int argc, char *argv[])
{
	int i, j, k;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	k = i * j;

	printf("%d\n", k);
	return (0);
}
