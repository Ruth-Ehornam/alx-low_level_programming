#include "main.h"

/**
 * get_bit - returns the value of a bit at an index
 * in an unsigned long integer.
 * @n: the unsigned long integer to search
 * @index: the index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_output;

	if (index > 63)
	{
	return (-1);
	}

	bit_output = (n >> index) & 1;
	return (bit_output);
}
