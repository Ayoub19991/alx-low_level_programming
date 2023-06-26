#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 */

void print_rev(char *s)
{
	int leng = 0;
	int r;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	s--;
	for (r = leng; r > 0; r--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
