#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to number to change
 * @index: index value of the bit to set to 1
 *
 * Return: 1 for success, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = (*n | (1 << index));
	return (1);
}
