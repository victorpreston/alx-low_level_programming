#include "lists.h"
#include <stdio.h>

/**
 * premain_func - function that runs befor the main
 *
 *
 * Return: Does not return anything for this code
 *
 */

void premain_func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
void premain(void) __attribute__((constructor))
void premain(void)
{
	premain_func();
}
/*****************************STOP***************************/
