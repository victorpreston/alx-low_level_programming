#include "main.h"



#include <stdio.h>
#include <stdlib.h>

/******************START****************/
/**
 * append_text_to_file - function; appends_text at end of the file
 *
 * @filename:pointer:shows to the name of the file.
 *
 * @text_content: represent the string to be added at end of_file
 *
 * Return: filename is NULL -1 when the function fails.
 *         The user to lack permision on missing file -1
 *         Elsewhere return 1.
 *
 * ALX PROJECTS
 */


int append_text_to_file(const char *filename, char *text_content)
{
	/**Set Constants**/
	const char *f_name = filename;
	char *t_c = text_content;
	int file;
	int a_s;
	int w_d = 0;
	ssize_t len = 0;

	if (f_name == NULL)
		return (-1);
	file = open(f_name, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);
	if (t_c != NULL)
	{
		while (t_c[len] != '\0')
			len++;
		a_s = write(file, t_c, len);
		close(file);

		if (a_s == -1)
			return (-1);
	}
	else
	{
		close(file);
	}
	return (1);
}
/***************************START**************************/
