#include <stdio.h>
/**
  * main - entry point
  * @argc: argument count
  * @argv: arguments vector
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc != 4)
		return (98);
	for (i = 0; i < argc; i++)
		printf("%s ", argv[i]);
	printf("\n");
	return (0);
}
