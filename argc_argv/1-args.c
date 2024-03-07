#include "main.h"
#include <stdio.h>

/**
* main - program that prints the number of arguments passed into it.
* @argc: Argument Count
* @argv: Argument Vectoriel
* Return: 0
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	/* Return 0 to indicate successful execution */
	return (0);
}


