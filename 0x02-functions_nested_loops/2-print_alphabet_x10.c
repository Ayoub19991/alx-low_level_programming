#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char charr;
	int i;

	for (i = 1 ; i <= 10 ; i++)
	{
	for (charr = 'a' ; charr <= 'z' ; charr++)
	{
		_putchar(charr);
	}
	_putchar('\n');
	}
}

