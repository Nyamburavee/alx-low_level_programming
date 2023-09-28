#include "main.h"

/**
 * flip_bits - counts the number of bits to flip
 * to move from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int present_val;
	unsigned long int exclusive_val = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		present_val = exclusive >> i;
		if (present_val & 1)
			count++;
	}

	return (count);
}
