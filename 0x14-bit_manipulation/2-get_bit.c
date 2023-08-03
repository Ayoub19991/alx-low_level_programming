#include "main.h"

/**
 * get_bit return d val of a bit at an index in a decimal num
 * @n : num 2 search
 * @index : index of d bit
 *
 * Return : val of d bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
