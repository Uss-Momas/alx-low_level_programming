#include <stdio.h>
/**
  * main - entry point
  * Return: 0
  */
int main(void)
{
	long int previous = 1, now = 2, next, limit = 0;

	printf("%ld, %ld", previous, now);
	while (limit <= 96)
	{
		next = previous + now;
		previous = now;
		now = next;
		if (limit == 96)
			printf("\n");
		else
			printf(", %ld", now);
		limit++;
	}
	return (0);
}
