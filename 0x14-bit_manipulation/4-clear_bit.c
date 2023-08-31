#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @b: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 if true, -1 if false
 */
int clear_bit(unsigned long int *b, unsigned int index)
{
	if (index > 63)
		return (-1);

	*b = (~(1UL << index) & *b);
	return (1);
}
