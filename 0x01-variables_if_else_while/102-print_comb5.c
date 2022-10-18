#include <stdio.h>
/**
  * main - entry point
  * Return: 0
  */
int main(void)
{
	int a = 0, b = 0, c = 0, d = 0;

	while (a <= 9)
	{
		b = a + 1;
		while (b <= 9)
		{
			while (c <= 9)
			{
				while (d <= 9)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					putchar(d + '0');
					putchar(',');
					putchar(' ');
					d++;
				}
				if (c != 9)
					d = 0;
				c++;
			}
			b++;
		}
		a++;
	}
	return (0);
}
