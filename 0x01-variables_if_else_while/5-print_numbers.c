#include <stdio.h>
/**
  * main - entry point
  * Return: 0 for sucessfull
  */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		if (n == 9)
			printf("\n");
		n++;
	}
	return (0);
}
