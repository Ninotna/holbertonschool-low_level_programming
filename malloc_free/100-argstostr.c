#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
* argstostr - a function that concatenates all the arguments of your program.
* @ac: Argc
* @av: Argv
* Return: an array of char with args
*/

char *argstostr(int ac, char **av)
{
	int i, j, len, bufferlen;
	char *p;

	/* Validation des arguments d'entrée */
	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}

	/* Calcul de la longueur totale nécessaire */
	len = bufferlen = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}

	/* Allouer de la mémoire pour la chaîne résultante */
	p = (char *)malloc(len + ac + 1); /* +1 pour le '\0' final */
	if (p == NULL)
	{
		return (NULL); /* Échec de l'allocation de mémoire */
	}

	/* Concaténer les arguments */
	bufferlen = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[bufferlen++] = av[i][j];
		}
		p[bufferlen++] = '\n'; /* Ajouter un saut de ligne */
	}
	p[bufferlen] = '\0'; /* Terminer la chaîne avec un '\0' */

	return (p);
}
