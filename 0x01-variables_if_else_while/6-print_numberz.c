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
		putchar(n + '0');
		if (n == 9)
			putchar('\n');
		n++;
	}
	return (0);
}
