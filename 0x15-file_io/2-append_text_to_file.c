#include "main.h"
#include <string.h>
/**
  * append_text_to_file - function that appends text to a file
  * @filename: the name of the file
  * @text_content: the content to be added to the text
  * Return: 1 for success and -1 for failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	if (filename != NULL)
	{
		int fd;
		ssize_t w_bytes;

		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		if (text_content == NULL)
			return (1);

		w_bytes = write(fd, text_content, strlen(text_content));
		if (w_bytes == -1)
			return (-1);
		close(fd);
		return (1);
	}
	else
		return (-1);
}
