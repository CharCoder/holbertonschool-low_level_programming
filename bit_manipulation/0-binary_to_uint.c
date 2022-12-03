#include "main.h"
#include <math.h>

/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: 0
 */

int _strlen(const char *s)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

/**
 * binary_to_uint -
 * @b: binary number
 * Return: unsigned int or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i, len, exp = 1;
	char valor;

	len = _strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '\0')
			return (0);
		if (b[i] != '0' && b[i] != '1')
			return (0);
		valor = b[i];
		if (valor == '1')
			num += 1 * exp;
		exp *= 2;
	}
	return (num);
}
