#include <stdio.h>
/**
  * main - entry point of the program
  * @argc: the number os arguments of the program
  * @argv: is a pointer to a pointer of strings
  * Return: 0 if it's success
  */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
