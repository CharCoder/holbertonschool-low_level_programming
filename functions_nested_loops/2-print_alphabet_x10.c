#include "main.h"
/**
 *print_alphabet_x10 - print text
 *Return: 0
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = '1'; i <= '9'; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

