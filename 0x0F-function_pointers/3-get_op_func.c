#include "function_pointers.h"
/**
  * get_op_func - func that returns operator type
  * @s: operator passed as argument
  * Return: a pointer to the function that corresponds
  * to the operator given
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
}
