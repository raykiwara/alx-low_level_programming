#include <stdio.h>
/**
 * main - prints the name of a program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
