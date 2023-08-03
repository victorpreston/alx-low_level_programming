#include "main.h"

#include <stdio.h>
#include <string.h>

/********************START******************/
/**
 * get_endianness -function: Looks the endian.
 *
 * Return: For big_endian - 0.
 *         For little_endian - 1.
 *
 *
 *
 * ALX PROJECTS
 */


int get_endianness(void)
{
	unsigned int tst_end = 1;
	/*return endiannes*/
	return (tst_end & 1);
}
/**********************STOP*********************/
