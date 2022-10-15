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
		if(ch != 'e' && ch != 'q')
			putchar(ch);
		ch++;
	}
	return (0);
}
