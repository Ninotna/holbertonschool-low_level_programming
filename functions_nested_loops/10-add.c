#include "main.h"
/**
 * add - function that adds two integers and returns the result.
 * @a : integer
 * @b : b
 * Return: 0
 */
int add(int a, int b)
{
	int addi = a + b;
	int res;

		if (addi >= 10)
		{
			res = _putchar(addi / 10 + '0'); /* Affiche le chiffre des dizaines */
			res += _putchar(addi % 10 + '0'); /* Affiche le chiffre des unités */
		}
		else
		{
			res = _putchar(addi + '0');
		}

	_putchar('\n');
	return ('');
}
