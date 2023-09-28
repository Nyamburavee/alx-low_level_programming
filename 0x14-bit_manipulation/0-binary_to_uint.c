#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: The string containing the binary number
 *
 * Return: the converted binary number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int con_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		con_val = 2 * con_val + (b[i] - '0');
	}

	return (con_val);
}
