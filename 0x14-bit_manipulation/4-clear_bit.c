#include "main.h"

/**
 * clear_bit - Set the value of a given bit to 0 in a decimal number.
 * @n: Pointer to the number to change.
 * @index: Index of the bit to clear.
 *
 * Return: 1 if successful, -1 if failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
