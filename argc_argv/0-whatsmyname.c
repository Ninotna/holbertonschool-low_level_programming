#include "main.h"
#include <stdio.h>

/**
* main - Whatsmyname
* @argc: Argument Count
* @argv: Argument Vector
* Return: print the name of the file
*/

int main(int argc, char *argv[])
{

	char *name;
	(void)argc;

	/* Get the program name from argv[0] */
	name = argv[0];

	/* Print the program name */
	printf("%s\n", name);

	/* Return 0 to indicate successful execution */
	return (0);
}


