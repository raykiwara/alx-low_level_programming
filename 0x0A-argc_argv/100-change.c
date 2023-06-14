#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	unsigned long int i;
	int j, k;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	j = atoi(argv[1]);
	k = 0;

	if (j < 0)
	{
		printf("0\n");
		return (1);
	}
	for (i = 0; j > 0 && i < sizeof(cents) / sizeof(cents[0]); i++)
	{
		k += j / cents[i];
		j %= cents[i];
	}
	printf("%d\n", k);
	return (0);
}
