#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the char c 2 stdout
 * @c : The char 2 print
 *
 * Return : if success 1.
 * if error, -1 is returned, and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
