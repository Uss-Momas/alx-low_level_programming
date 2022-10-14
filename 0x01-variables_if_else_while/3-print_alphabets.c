#include <stdio.h>
/**
  * main - entry point
  * Return: 0 sucess
  */
int main(void)
{
	int ch = 'a';
	int upChar = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		if (ch == 'z')
			while (upChar <= 'Z')
			{
				putchar(upChar);
				if (upChar == 'Z')
				{
					putchar('\n');
				}
				upChar++;
			}
		ch++;
	}
	return (0);
}
