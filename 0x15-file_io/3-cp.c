#include "main.h"
#define BUF_SIZE 1024

void error_98(int f0, char *buffer, char *argv);
void error_99(int f0, char *buffer, char *argv);
void error_100(int f0, char *buffer);

/**
 * main - copies one file to another
 * @argc: no. of arguments(files)
 * @argv: name of files
 * Return: 0
 */
int main(int argc, char **argv)
{
	int f0, f1, r0, r1;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * BUF_SIZE);
	if (!buffer)
	{
		return (0);
	}
	f1 = open(argv[1], O_RDONLY);
	error_98(f1, buffer, argv[1]);
	f0 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(f0, buffer, argv[2]);
	do {
		r0 = read(f1, buffer, BUF_SIZE);
		if (r0 == 0)
			break;
		error_98(r0, buffer, argv[1]);
		r1 = write(f0, buffer, r0);
		error_99(r1, buffer, argv[2]);
	} while (r1 >= BUF_SIZE);
	r0 = close(f0);
	error_100(r0, buffer);
	r0 = close(f1);
	error_100(r0, buffer);
	free(buffer);
	return (0);
}
/**
 * error_98 - description for error_98
 * @f0: value
 * @buffer: content to be copied
 * @argv: filename
 */
void error_98(int f0, char *buffer, char *argv)
{
	if (f0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		free(buffer);
		exit(98);
	}
}
/**
 * error_99 - description for error_99
 * @f0: value
 * @buffer: content to be copied
 * @argv: filename
 */
void error_99(int f0, char *buffer, char *argv)
{
	if (f0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		free(buffer);
		exit(99);
	}
}
/**
 * error_100 - description for error_100
 * @f0: value
 * @buffer: content to be copied
 */
void error_100(int f0, char *buffer)
{
	if (f0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f0);
		free(buffer);
		exit(100);
	}
}
