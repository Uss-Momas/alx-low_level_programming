#include <stdio.h>
/**
  * main - entry point
  * Return: 0 for sucess
  */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' || ch != 'e')
		{
			putchar(ch);
			if (ch == 'z')
				putchar('\n');
			ch++;
		}
		else
		{
			ch++;
		}
	}
}
