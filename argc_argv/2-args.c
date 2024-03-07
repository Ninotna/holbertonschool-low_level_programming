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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s \n", argv[i]);
	}

	/* Return 0 to indicate successful execution */
	return (0);
}


