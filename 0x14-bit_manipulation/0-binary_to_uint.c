#include "main.h"

#include <stdio.h>
#include <string.h>

/******************START****************/
/**
 * binary_to_uint - func;converts binary No. to an unsigned int.
 * @b:pointer: shows to a string of 0 and 1 chars(characters).
 *
 * Return: If b = NULL/has chars not 0/ one - zero.
 *         Else show converted No.
 *
 * ALX PROJECTS
 */

unsigned int binary_to_uint(const char *b)
{
	const char *bit = b;
	int y;
	unsigned int re_sult = 0;

	if (!bit)
		return (0);

	for (y = 0; bit[y]; y++)
	{
		if (bit[y] < '0' || bit[y] > '1')
			return (0);
		re_sult = 2 * re_sult + (bit[y] - '0');
	}

	return (re_sult);
}
/*****************STOP*******************/
