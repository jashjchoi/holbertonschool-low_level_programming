#include "holberton.h"
/**
* create_file -  creates a file.
* @filename: name of file
* @text_content: content of the file
* Return: 1, -1 if fails
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int text_size;
	int read_txt;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	if (text_content != NULL)
	{
		for (text_size = 0; text_content[text_size]; text_size++)
		{
			continue;
		}
	}
	read_txt = write(fd, text_content, text_size);
	if (read_txt == -1)
	{
		return (-1);
	}
	close(fd);

	return (1);
}
