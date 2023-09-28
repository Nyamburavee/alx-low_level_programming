#include "main.h"

/**
 * get_bit - returns the value of a bit at a given  index
 * @n: The number to search
 * @index: The index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_index;

	if (index > 63)
		return (-1);

	bit_index = (n >> index) & 1;

	return (bit_index);
}
