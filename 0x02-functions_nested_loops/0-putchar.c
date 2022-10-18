#include "_putchar.c"
/**
  * main - entry point
  * Return: 0
  */
int main(void)
{
	char ch[] = "_putchar";
	int count = 0;

	while (count < 8)
	{
		_putchar(ch[count]);
		count++;
	}
	_putchar('\n');
	return (0);
}
