#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
  * main - entry point of our program
  * @ac: arguments numbers
  * @av: arguments strings
  * Return: 1 on success or 97, 98, 99, 100 on failure
  */
int main(int ac, char *av[])
{
	int f_from, f_to, fd_close;
	ssize_t r_bytes, w_bytes;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	f_from = open(av[1], O_RDONLY);
	f_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	r_bytes = read(f_from, buffer, 1024);
	if (f_from == -1 || r_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	w_bytes = write(f_to, buffer, 1024);
	if (w_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	fd_close = close(f_from);
	if (fd_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}
	fd_close = close(f_to);
	if (fd_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to);
		exit(100);
	}
	return (1);
}
