#include "holberton.h"
/**
* main - duplicates the content of a file to another file
* @argc: args counter
* @argv: variadic arguments
* Return: 0 on success, EXIT if fails
*/
int main(int argc, char *argv[])
{
	int fdin = 0, fdout = 0, out_count = 0;
	char buffer[1024];
	int in_count = 1024;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdin = open(argv[1], O_RDONLY);
	if (fdin == 1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read from file %s\n", argv[1]);
		exit(98);
	}
	fdout = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdout == 1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot write to %s\n", argv[2]);
		exit(99);
	}
	while (in_count == 1024)
	{
		in_count = read(fdin, buffer, 1024);
		if (in_count == -1)
			dprintf(STDERR_FILENO, "Error: Cannot read from file %s\n", argv[1]);
			exit(98);
		out_count = write(fdout, buffer, out_count);
		if (out_count == -1)
			dprintf(STDERR_FILENO, "Error: Cannot write to %s\n", argv[2]);
			exit(99);
	}
	if (close(fdin) == -1)
		dprintf(STDERR_FILENO, "Error: Cannot close fd %d\n", fdin);
		exit(100);
	if (close(fdout) == -1)
		dprintf(STDERR_FILENO, "Error: Cannot close fd %d\n", fdout);
		exit(100);
	return (0);
}
