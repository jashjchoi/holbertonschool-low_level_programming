#include "holberton.h"
/**
* read_textfile - reads text file and prints the letters
* @filename: name of file
* @letters: numbers of letters to be read and printed
* Return: number of letters, 0 if fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_f, write_f;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
	{
		return (0);
	}
	read_f = read(fd, buffer, letters);
	write_f = write(STDOUT_FILENO, buffer, read_f);

	free(buffer);
	close(fd);

	return (write_f);
}
