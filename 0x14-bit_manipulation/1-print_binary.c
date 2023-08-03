#include "main.h"


/*************START***********/
/**
 * print_binary - function,prints binary_rep of a No.
 *
 *@n: printable number.
 *
 *
 * ALX PROJECTS
 */



void print_binary(unsigned long int n)
{
	const unsigned long int number = n;
	/**num to take place of 'n'**/

	/**Check if grater than 1**/
	if (number > 1)
		print_binary(number >> 1);

	_putchar((number & 1) + '0');
}
/*************STOP*************/
