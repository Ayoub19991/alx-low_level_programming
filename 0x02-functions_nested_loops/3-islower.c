#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: the character to be checked
 *
 * Description: This function determines whether a character is lowercase or not.
 *              It takes a character as input and returns 1 if the character is lowercase,
 *              and returns 0 otherwise.
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
