#include <stdio.h>
/**
  * main - entry point
  * Return: 0 succes
  */
int main(void)
{
	for(int ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		if (ch == 'z')
			putchar('\n');
	}
	return (0);
}
