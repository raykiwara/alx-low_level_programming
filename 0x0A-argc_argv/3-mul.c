#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 3)
	{
		int j = atoi(argv[1]);
		int k = atoi(argv[2]);
		int mul;

		mul = j * k;
		printf("%d\n", mul);
	}
	return (0);
}
