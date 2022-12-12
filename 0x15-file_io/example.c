#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int create_file(const char *filename, char *text_content);

int main(int ac, char *av[])
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}
	res = create_file(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0);
}

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w_bytes;

	fd = open(filename, O_CREAT | O_WRONLY, 00600);
	if (fd == -1)
		return (-1);
	w_bytes = write(fd, text_content, strlen(text_content));
	close(fd);
	return ((int)w_bytes);
}
