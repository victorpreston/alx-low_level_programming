#include "main.h"




/*******************START*******************/
/**
 * set_bit - function: sets bit in position to one (1).
 * @n:pointer: shows at the bit.
 * @index:shows the index to be set.
 *
 * Return: On success, 1 is returned
 *         Elsewhere we get -1 when on failure.
 *
 *
 *
 * ALX PROJECTS
 */



int set_bit(unsigned long int *n, unsigned int index)
{
	/*set new constants to work with*/
	/**
	 * number = n.
	 * tag = index.
	 */
	unsigned long int *number = n;
	unsigned int tag = index;

	if (tag >= (sizeof(unsigned long int) * 8)
			return (-1);
	*number ^= (1UL << tag);
	return (1);
}
/******************STOP**********************/
