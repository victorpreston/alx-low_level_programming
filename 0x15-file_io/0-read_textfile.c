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
	char *buffer;

	if (filename == NULL)
		return (0);
	f_d = open(filename, O_RDONLY);
	if (f_d == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(f_d);
		return (0);
	}
	while ((bytes_read = read(f_d, buffer, letters)) > 0)
	{
		bytes_written = write(STDOUT_FILENO, buffer, (size_t) bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(f_d);
			free(buffer);
			return (0);
		}
		total_read += bytes_written;
		if (total_read >= letters)
			break;
	}
	close(f_d);
	free(buffer);
	return (total_read);
}
/***************************STOP****************************/
