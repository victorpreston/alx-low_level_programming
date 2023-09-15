#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * main - function: prints passwords for the crackme5
 *
 * @argc: No. of arguments applied
 * @argv: Pointer; points to the argumnets
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char pwd[7], *c;
	int l = strlen(argv[1]), j, p;

	c = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	p = (l ^ 59) & 63;
	pwd[0] = c[p];

	p = 0;
	for (j = 0; j < l; j++)
		p += argv[1][j];
	pwd[1] = c[(p ^ 79) & 63];

	p = 1;
	for (j = 0; j < l; j++)
		p *= argv[1][j];
	pwd[2] = c[(p ^ 85) & 63];

	p = 0;
	for (j = 0; j < l; j++)
	{
		if (argv[1][j] > p)
			p = argv[1][j];
	}
	srand(p ^ 14);
	pwd[3] = c[rand() & 63];

	p = 0;
	for (j = 0; j < l; j++)
		p += (argv[1][j] * argv[1][j]);
	pwd[4] = c[(p ^ 239) & 63];

	for (j = 0; j < argv[1][0]; j++)
		p = rand();
	pwd[5] = c[(p ^ 229) & 63];

	pwd[6] = '\0';
	printf("%s", pwd);
	return (0);
}
