#include <stdio.h>
/**
  * main - entry point of the program
  * @argc: the number os arguments of the program
  * @argv: is a pointer to a pointer of strings
  * Return: 0 if it's success
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
