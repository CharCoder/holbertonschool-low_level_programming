#include "3-calc.h"

/**
 * get_op_func - get the function that corresponds to @s
 * @s: operator (+, -, *, /, %)
 * Return: pointer to funtion or NULL if failed
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
	int i = 0;

	while (i < 6)
	{
		if (*s == *(ops[i]).op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
