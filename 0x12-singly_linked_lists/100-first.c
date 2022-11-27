#include <stdio.h>
/**
  * premain - a special fun that runs before main
  * Return: nothing
  */
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
