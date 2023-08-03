#include "main.h"


#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/*****************START*****************/
/**
 * clear_bit - function: sets value of bit to a position 0.
 * @n:pointer: shows to the bit.
 * @index:position: starts at 0 and is potions to be cleared.
 *
 * Return: On an error (-1) is returned.
 *         Elsewhere the program should return - 1(one).
 *
 *
 * ALX PROJECTS
 */







int clear_bit(unsigned long int *n, unsigned int index)
{
	/**
	 * Set new variables to work with
	 *
	 * *number = n.
	 * tag = index.
	 */

	unsigned long int *number = n;
	unsigned int tag = index;

	/**Back to program
	 * Check for error
	 */
	if (tag >= (sizeof(unsigned long int) * 8))
		return (-1);

	*number &= ~(1 << tag);
	
	return (1);
}
/**********************STOP*************************/
