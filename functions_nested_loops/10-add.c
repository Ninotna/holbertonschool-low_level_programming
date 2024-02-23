#include "main.h"
/**
 * add - function that adds two integers and returns the result.
 * @a : integer
 * @b : b
 * Return: a+b
 */
int add(int a, int b)
{
	int addi = a + b;

		if (addi >= 10)
		{
			_putchar(addi / 10 + '0'); /* Affiche le chiffre des dizaines */
			_putchar(addi % 10 + '0'); /* Affiche le chiffre des unités */
		}
		else
		{
			_putchar(addi + '0');
		}

	_putchar('\n');
	return (addi);
}
