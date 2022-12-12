#ifndef _Main_h_
#define _Main_h_
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
int _putchar(char);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
ssize_t countBytes(char *ptr);
#endif
