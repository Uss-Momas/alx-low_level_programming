#include "main.h"
int sqrt_rec(int guess, int n);
/**
  * _sqrt_recursion - function that calculates square root
  * @n: the natural number
  * Return: the real result
  */
int _sqrt_recursion(int n)
{
	return (sqrt_rec(1, n));
}
/**
  * sqrt_rec - function to guess the number next to the square root of 'n'
  * @guess: is a number that is used to guess if guess*guess == 'n'
  * @n: the actual square root number
  * Return: the guess or continues trying
  */
int sqrt_rec(int guess, int n)
{
	int next_guess = ((guess + (n / guess)) / 2);

	if ((guess * guess == n) && ((guess + 1) * (guess + 1) > n))
	{
		return (guess);
	}
	else
		return (sqrt_rec(next_guess, n));
}
