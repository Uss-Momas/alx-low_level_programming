#include <stdio.h>
/**
  * main - entry point
  * Return: 0 succes
  */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		if (ch == 'z')
			putchar('\n');
		ch++;
	}
	return (0);
}
