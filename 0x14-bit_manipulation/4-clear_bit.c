#include "main.h"

/**
 * clear_bit - the function to  set the value of a given bit to 0
 * @n: this is the pointer to the no. to change.
 * @index: index of the bit to clear.
 *
 * Return: it returns 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
