#include "main.h"
/**
 * flip_bits - counts the nmbr of bits to change
 * @n: 1st nmbr
 * @m: 2nd nmbr
 * Return: nmbr of bits to change
 * sign by Rida
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int exclusive = n ^ m;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
