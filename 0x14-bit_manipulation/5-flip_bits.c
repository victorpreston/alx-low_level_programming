#include "main.h"

/******************START********************/
/**
 * flip_bits - function: counts No of Bits
 *             flipped from No1 to No2 or another.
 * @n:pointer: number to be flipped ny the function
 * @m:flipping number or constant.
 *
 * Return:flipped bits n ^ m
 *
 *
 * ALX PROJECTS
 */



unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int no_flp = n ^ m;
	int num_ct = 0;

	/*loop*/
	for (; no_flp; no_flp >>= 1)
	{
		if (no_flp & 1)
			num_ct++;
	}

	return (num_ct);
}
/**********************STOP******************/
