#include <stdio.h>
/**
 * main - prints no. of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argv[i] >= argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
