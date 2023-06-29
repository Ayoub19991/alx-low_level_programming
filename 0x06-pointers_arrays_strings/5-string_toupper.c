#include "main.h"

/**
 * string_toupper - Convert lowercase letters to uppercase in a string
 * @n: Pointer to the string
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
