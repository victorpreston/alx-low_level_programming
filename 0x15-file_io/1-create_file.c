#include "main.h"



#include <stdio.h>
#include <stdlib.h>

/****************START****************/
/**
 * create_file - function; this creates a file
 *
 * @filename:pointer: shows to the name of file to be created
 *
 * @text_content:pointer: shows to a string to write to file
 *
 * Return: gives a (-ve) -1 when function fails
 *         Elsewhere returns - 1.
 *
 *
 * ALX PROJECTS
 */



int create_file(const char *filename, char *text_content)
{
	/***sets constants***/
	int f_d;
	ssize_t len = 0;
	ssize_t b_w;

	if (filename == NULL)
		return (-1);
	f_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f_d == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		b_w = write(f_d, text_content, len);
		close(f_d);

		if (b_w == -1)
			return (-1);
	}
	else
	{
		close(f_d);
	}
	return (1);
}
/**********************START********************/
