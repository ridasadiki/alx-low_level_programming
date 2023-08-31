#include "main.h"
/**
 * get_bit - returns the value of a bit at an index in a decimal nmbr
 * @n: nmbr to search
 * @index: index
 * Return: val
 * sign by Rida
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);
	bit_val = (n >> index) & 1;
	return (bit_val);
}
