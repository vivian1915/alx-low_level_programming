#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * follwed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	i = 1;

	while (i <= 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		i++;
		_putchar('\n');
	}
}
