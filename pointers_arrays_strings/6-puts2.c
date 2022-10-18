#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: string
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
