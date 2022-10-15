#include <stdio.h>
/**
  * main - entry point
  * Return: 0
  */
int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		if (ch == 'a')
			putchar('\n');
		ch--;
	}
	return (0);
}
