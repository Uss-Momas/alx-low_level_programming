#include <stdio.h>
/**
  * main - entry point
  * Return: 0
  */
int main(void)
{
	long int count = 0, previous = 1, now = 2, next;

	printf("%ld, %ld", previous, now);
	while (count <= 48)
	{
		next = previous + now;
		previous = now;
		now = next;
		if (count == 48)
			printf("\n");
		else
			printf(", %ld", next);
		count++;
	}
	return (0);
}
