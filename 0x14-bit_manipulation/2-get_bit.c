#include "main.h"

/**
 * get_bit - the function return value of a bit at an index in a decimal no.
 * @n: no. to search.
 * @index: index of the bit.
 *
 * Return: function returns value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
