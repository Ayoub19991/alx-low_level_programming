#include "main.h"

/**
 * clear_bit set d val of a given bit to 0
 * @n : pointer 2 d num 2 change
 * @index : index of d bit 2 clear
 *
 * Return : 1 if success, -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
