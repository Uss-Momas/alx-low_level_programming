#include <stdio.h>
/**
  * main - entry
  * Return: 0
  */
int main(void)
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	while (num1 <= 9)
	{
		num2 = num1 + 1;
		while (num2 <= 9)
		{
			num3 = num2 + 1;
			while (num3 <= 9)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');
				if (num1 == 7 && num2 == 8 && num3 == 9)
					putchar('\n');
				else
				{
					putchar(',');
					putchar(' ');
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	return (0);
}
