#include <stdio.h>
#include <stdlib.h>
/**
  * main - entry point of the program
  * @argc: the number os arguments of the program
  * @argv: is a pointer to a pointer of strings
  * Return: 0 if it's success
  */
int main(int argc, char *argv[])
{
	int number, ncoins = 0;

	if (argc == 2)
	{
		number = atoi(argv[1]);
		if (number < 0)
			printf("0\n");
		else
		{
			while (number > 0)
			{
				if (number >= 25)
					number -= 25;
				else if (number >= 10)
					number -= 10;
				else if (number >= 5)
					number -= 5;
				else if (number >= 2)
					number -= 2;
				else if (number >= 1)
					number -= 1;
				ncoins++;
			}
			printf("%d\n", ncoins);
		}
	}
	else
		printf("Error\n");
	return (0);
}
