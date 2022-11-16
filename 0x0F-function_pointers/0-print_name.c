#include "function_pointers.h"
/**
  * print_name - function that prints a name
  * @name: is the name to be printed;
  * @f: is a pointer to a function with no return
  * that takes a pointer to a char as parameter
  * Return: nothing
  */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
