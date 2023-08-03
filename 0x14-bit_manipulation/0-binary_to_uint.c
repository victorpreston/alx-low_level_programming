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
	if (b == NULL)
	{
		return (0);
	}

	unsigned int result = 0;
	int len = strlen(b);

	for (int i = 0; i < len; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = (result << 1) + (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
/*******************STOP****************/
