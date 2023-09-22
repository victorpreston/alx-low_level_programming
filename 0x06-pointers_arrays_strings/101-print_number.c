#include "main.h"


/**
 * print_number - function: prints an integer
 *
 * @n: integer to be printed in program
 */
void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number *= -1;
	}
	if (number >= 10)
	{
		print_number(number / 10);
	}
	_putchar('0' + (number % 10));
}
