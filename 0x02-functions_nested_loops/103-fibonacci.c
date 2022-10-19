#include <stdio.h>
/**
  * main - entry point
  * Return: 0
  */
int main(void)
{
	long int previous = 1, now = 2, next, limit = previous, sum = 0;

	while (limit <= 4000000)
	{
		if(now % 2 == 0)
			sum += now;
		next = previous + now;
		previous = now;
		now = next;
		limit = now;
	}
	printf("%ld\n", sum);
	return (0);
}
