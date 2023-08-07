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
	int f_d;
	ssize_t total_read = 0;
	ssize_t bytes_read;
	ssize_t bytes_written;
	/****set constants****/
	char *bffer;

	if (filename == NULL)
		return (0);
	f_d = open(filename, O_RDONLY);
	if (f_d == -1)
		return (0);

	bffer = malloc(sizeof(char) * letters);
	if (bffer == NULL)
	{
		close(f_d);
		return (0);
	}
	while ((bytes_read = read(f_d, bffer, letters)) > 0)
	{
		bytes_written = write(STDOUT_FILENO, bffer, (size_t) bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(f_d);
			free(bffer);
			return (0);
		}
		total_read += bytes_written;
		if (total_read >= letters)
			break;
	}
	close(f_d);
	free(bffer);
	return (total_read);
}
/***************************STOP****************************/
