#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: 0
 */
int _strlen(char *s)
{
	int cont = 0;

	while (s[cont])
	{
		cont++;
	}
	return (cont);
}

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return -1;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return -1;
	}

	if (text_content == NULL)
	{
		return 1;
	}

	bytes_written = write(fd, text_content, _strlen(text_content));
	if (bytes_written == -1)
	{
		return -1;
	}

	close(fd);

	return 1;
}
