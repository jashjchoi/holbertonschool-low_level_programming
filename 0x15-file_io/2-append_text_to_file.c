#include "holberton.h"
/**
* append_text_to_file - appends text at the end of a file.
* @filename: name of file
* @text_content: the NULL terminated string to add at the end of the file
* Return: 1, -1 if fails
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int text_size;
	int append_txt;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (text_size = 0; text_content[text_size]; text_size++)
		{
			continue;
		}
		append_txt = write(fd, text_content, text_size);
		if (append_txt == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
