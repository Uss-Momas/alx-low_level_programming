#include <stddef.h>
#include "main.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
  * read_textfile - reads a text file and print it's content
  * in the Standard Output
  * @filename: the name of the file
  * @letters: the size of the chars of the file
  * Return: the actual number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nbytes, nbwrote;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	nbytes = read(fd, buffer, letters);
	if (nbytes == -1)
		return (0);
	nbwrote = write(STDOUT_FILENO, buffer, letters);
	if (nbwrote == -1 || nbwrote != (ssize_t) letters)
		return (0);
	close(fd);
	free(buffer);
	return (nbytes);
}
