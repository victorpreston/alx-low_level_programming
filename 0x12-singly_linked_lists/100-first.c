#include "lists.h"

/**
 * premain, premain_func - function that runs befor the main
 * premain - serves as wrapper
 *
 * Return: Does not return anything for this code
 *
 */

void premain_func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/*we will use the premin function now**/

void premain(void) __attribute__((constructor));
void premain(void)
{
	premain_func();
}
/*****************************STOP***************************/
