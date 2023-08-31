#include "main.h"
/**
 * set_bit - sets a bit at a given index to 1
 * @n: point the nmbr to change
 * @index: index bit set to 1
 * Return: 1 if success, -1 if failure
 * sign by Rida
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
