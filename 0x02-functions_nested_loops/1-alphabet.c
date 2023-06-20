#include "main.h"

/*
 * Function: print_alphabet
 * ------------------------
 * Description: Prints all alphabets in lowercase.
 * 
 * Returns: void
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}
