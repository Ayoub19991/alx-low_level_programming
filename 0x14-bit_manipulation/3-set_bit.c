#include "main.h"

/**
 * set_bit set a bit at a given index to 1
 * @n : pointer to d num 2 change
 * @index : index of d bit 2 set to 1
 *
 * Return : 1 if success, -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
