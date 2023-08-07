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
	int i;
	int j;
	int len = 0;

	if (f_name == NULL)
		return (-1);

	if (t_c != NULL)
	{
		for (len = 0; t_c[len];)
			len++;
	}

	i = open(f_name, O_WRONLY | O_APPEND);
	j = write(i, t_c, len);

	if (i == -1 || j == -1)
		return (-1);

	close(i);

	return (1);
}
/***************************START**************************/
