#include "main.h"
/**
  * create_file - creates a file
  * @filename: the name of the file
  * @text_content: the content to add to the file
  * Return: 1 on success, -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t nbytes, w_bytes;

	if (filename != NULL)
	{
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);

		if (fd == -1)
			return (-1);
		if (text_content == NULL)
			w_bytes = write(fd, '\0', 0);
		else
		{
			nbytes = countBytes(text_content);
			w_bytes = write(fd, text_content, nbytes);
		}
		if (w_bytes == -1)
			return (-1);
		close(fd);
		return (1);
	}
	else
		return (-1);
}

/**
  * countBytes - count number of bytes of the string
  * @ptr: the pointer to the string
  * Return: the number of chars in the string
  */
ssize_t countBytes(char *ptr)
{
	ssize_t n;

	n = 0;
	while (*ptr != '\0')
	{
		ptr++;
		n++;
	}
	return (n);
}
