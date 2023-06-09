#include <stdio.h>
/**
 * main - prints number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i = 1;

	if (argv[i] <= argv[1])
		printf("%d\n", argc);
	return (0);
}
