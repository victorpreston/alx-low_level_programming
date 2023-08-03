#ifndef _H_MAIN_
#define _H_MAIN_


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


/*****Functions******/

unsigned int binary_to_uint(const char *b);
int check_valid_string(const char *b);
int _putchar(char c);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);


#endif
