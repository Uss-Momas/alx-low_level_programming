#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * main - entry point of the program
  * @argc: the number os arguments of the program
  * @argv: is a pointer to a pointer of strings
  * Return: 0 if it's success
  */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (tolower(*argv[i]) >= 'a' && tolower(*argv[i]) <= 'z')
			{
				printf("Error\n");
				return (-1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else if (argc == 1)
		printf("0\n");
	return (0);
}
