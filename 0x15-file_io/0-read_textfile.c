#include "main.h"

#include <stdio.h>
#include <stdlib.h>

/*******************START*******************/
/**
 * read_textfile - functions; reads text_file & prints to_stdout.
 * @filename:pointer: shows to the name of the file.
 * @letters: Shows the No. of letters the
 *           function (read_textfile) should read & print.
 *
 * Return:Returns 0 if filename is NULL.
 *
 *
 * ALX PROJECTS
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	/****Declarations******/
	int f_d;
	ssize_t w_cnt;
	ssize_t w_r;
	char *buffer;

	if (filename == NULL)
		return (0);
	f_d = open(filename, O_RDONLY);
	if (f_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	w_r = read(f_d, buffer, letters);
	if (w_r == -1)
		return (0);
	w_cnt = write(STDOUT_FILENO, buffer, w_r);
	if (w_cnt == -1 || w_r != w_cnt)
		return (0);

	free(buffer);
	close(f_d);
	return (w_cnt);
}
/**************************STOP******************************/
