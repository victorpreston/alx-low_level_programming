#include "main.h"
/**
 * print_number - prints an integer using _putchar(using recursion)
 *
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num *= -1;
	}
	if (num >= 10)
	{
		print_number(num / 10);
	}
	_putchar('0' + (num % 10));
}
